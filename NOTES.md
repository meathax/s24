# Differential-development notes

## Iteration 1 — Correct masked tile line-buffer writes

Scenario / first divergence: Gain Ground scoreboard values scroll through the
black inset areas of the RANK/NAME/ROUND/STAGE/SCORE headings on MiSTer
hardware. After the first attempted ownership fix, changing the selected player
also produced intermittent horizontal fragments down the left side of the
gameplay screen. MCP frame bursts place the heading failure throughout the
scoreboard scroll and the new fragments at the player-change transitions.

MAME reference: pinned MAME 0.289 renders the scoreboard animation with the
heading interiors intact. `draw_rect()` excludes the unselected physical map
before either the category or opaque pass writes a pixel. The user-supplied
hardware videos are the physical failure evidence. No reference was mutated.

The first hypothesis blamed stale M10K cells left by the masked-span fast path.
Generation, line-Y, completion and frame-epoch tags made that synthetic case
safe, but did not fix the hardware scoreboard and therefore were not the causal
fix. The later placed-RAM rewrite then exposed the real error: it moved the
line-buffer write enable out of the renderer's guarded sequential branch but
copied only the cache-hit predicate. It omitted `!disabled && selected`, so a
masked-out layer still wrote whenever its character row matched the cache.
That lets scrolling glyphs overwrite the heading coverage and makes cache
changes during player selection leak unrelated tile fragments at the left.

Change: `line_write_fire` now includes the renderer's original selection and
disable guard. The generation/ownership checks remain as defensive freshness
protection, while current pen-zero coverage remains valid for the mixer's
opaque heading backdrop.

Focused test: a real render line selects layer 0 at X=0 and masks it at X=8
while reusing the same cached character row. Before the correction it fails as
`masked tile issued a cache-hit line-buffer write`; afterward it passes along
with the prior stale-generation and opaque-heading checks (744 clocks versus a
1,968-clock line budget). Both runs used visible SDL and wrote checkpoints.

Regression: the full Gain Ground visual hierarchy rebuilds with `--savable`,
assertions and one model thread. A visible cold run remains assertion-clean
through its configured frame-240 stop and writes a verified frame-120
checkpoint. Hardware confirmation of both supplied scenes is still required.
No Quartus compilation or new RBF was produced for this correction.

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

## Iteration 3 — Scramble Spirits sprite-RAM deadline band

Scenario / first divergence: the MiSTer hardware video shows a broad strip in
which every sprite-produced element (logo, text, effects and objects) vanishes
while the independently rendered tile background remains. The cabinet image is
rotated, so the apparent vertical strip is a consecutive run of native sprite
scanlines. Its moving edge matches the sprite producer alternately missing and
recovering its line deadline, rather than a fixed clip rectangle.

Root cause: the PCB sprite generator reads dedicated local sprite RAM, but this
core serialized every linked-list, indirect-palette and pixel burst through
external SDRAM. The captured Scramble Spirits list follows the hardware/MAME
8,192-step safety budget. At the measured 13-clock SDRAM/CDC round trip the
renderer was still in `S_LIST_WAIT` at the first missing visible line, before
it had published any line bank. A continuous-raster replay of the real captured
sprite-RAM image missed 236 lines, including one 204-line run. The previous
single-line test passed because it checked eventual completion with no raster
deadline.

Change: `s24_sprite` now has a 256-entry (4 KiB) direct-mapped cache shared by
list, palette and pixel bursts. Its 128-bit data payload uses four explicit
M10Ks; asynchronous tags remain in fabric. A completed CPU sprite-RAM write
invalidates the corresponding aligned burst, plus the existing palette/data
hot entries, so reuse never makes CPU updates stale. Cache lookup overlaps the
existing request state; an SDRAM miss retains the prior request timing and all
list ordering, clip, rank and pixel rules remain unchanged.

Focused result: with the testbench cache disabled, the post-fix two-frame replay
at latency 13 makes 7,580 external requests instead of 71,174 and reports zero
missed scanlines in both frames. The same test exercises write-snoop
invalidation. Capacity sweeps fail at 128 entries (32 late lines per frame) and
pass at 256, establishing the minimum chosen size. The 3,547-entry Scramble
Spirits list, sprite-bank ownership and Crack Down latency-13 regressions also
pass with visible SDL and savable checkpoints.

The complete visual hierarchy builds with `--savable`, assertions and one
model thread. A visible cold Scramble Spirits run remains sprite-deadline clean
through frame 240 and writes a verified checkpoint, then the pre-existing
full-system bench aborts on its unrelated FDC cache assertion (`addr=0x6439`,
`data=0x5e`, `expected=0x41`) before the active scene. No Quartus compilation
or new RBF was produced for this iteration; MiSTer hardware confirmation
remains required.
