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
