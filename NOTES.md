# Differential-development notes

## Iteration 1 — Reject stale tile pixels behind windowed headings

Scenario / first divergence before fix: Gain Ground scoreboard values scrolling
through the black inset areas of the RANK/NAME/ROUND/STAGE/SCORE headings on
MiSTer hardware. A focused poisoned-line test reproduced the causal condition
as `valid=1 pixel=fff` after a masked span was skipped.

MAME reference: pinned MAME 0.289 renders the scoreboard animation with the
heading interiors intact. The user-supplied hardware video is the physical
failure evidence. Neither reference run was mutated.

Root cause: `s24_tile` treated display-side destructive clearing as the only
freshness contract. Masked eight-pixel spans intentionally perform no renderer
write, so an old M10K entry could remain valid and escape on a later bank use.

Change: tile line entries now carry a ten-bit per-bank generation. Each bank
also records line Y, frame epoch, completion and producer ownership; display
accepts only a matching completed entry. One cell per bank is scrubbed on each
fill, so every cell is cleared twice before a generation can wrap. Pen-zero
coverage remains valid for the mixer's opaque heading backdrop.

Focused test: pre-fix FAIL (`valid=1 pixel=fff`); post-fix PASS (`stale tile
rejected and opaque heading retained`, 744 clocks versus a 1,968-clock line
budget). Both runs used visible SDL and wrote full-state checkpoints.

Regression: the full Gain Ground visual hierarchy builds with `--savable`,
assertions and one model thread. A cold run remained tile-assertion-clean
through frame 240, then stopped at the unrelated existing assertion
`FDC prefetch launched over pending sprite burst` in `tb_gground_boot.sv:330`.
The attract scene therefore remains to be rechecked after that independent
regression is resolved. No Quartus compilation or RBF was produced.

## Iteration 2 — Crack Down hand-edge deadline

Scenario / first divergence: the hardware capture has a horizontal seam at
the final row of the 64-pixel-wide finger-detail sprite (descriptor 1051,
destination y=174). MAME and the former zero-wait Verilator test are clean.

Root cause: the focused bench acknowledged sprite bursts combinationally,
while MiSTer reaches sprite RAM through external SDRAM and a CDC handshake.
With a modeled 13-clock round trip, the renderer completed six hand rows only
after their display deadline. The return from every tile-data burst also spent
one redundant clock re-entering `S_X_SOURCE`, even though the request could
only have been launched after that state's bounds and X-step decisions passed.

Change: `S_DATA_WAIT` now returns directly to the already-selected scalar or
four-pixel emit path. Addressing, artwork, transparency, rank and write order
are unchanged. The Crack Down list bench now accepts `+MEM_LATENCY=N` and
checks readiness at raster consumption instead of merely eventual completion.

Focused result: pre-fix latency 13 FAIL (58/64 rows, six late); post-fix
latency 13 PASS (64/64, zero late). Latency 14 still fails, proving the test
remains deadline-sensitive. Runs used visible SDL and savable checkpoints.
No Quartus compilation or new RBF was produced for this iteration.
