# Sega 315-5292 decap exploitation plan

## Objective

Use Furrtek's 315-5292 die photograph to improve the System 24 tile generator
without treating visual similarity as proof of function. MAME remains the
software-visible behavioral contract. The decap, the official Sega schematics,
and real-board measurements are used to resolve details that MAME abstracts or
does not currently emulate.

No Verilator, Quartus, synthesis, fit, or FPGA build is part of this work phase.

## Source image and provenance

- Original: `D:/Downloads/sega_315-5292_furrtek_mz.jpg`
- Dimensions: 20,566 x 20,515 pixels, RGB
- Size: 169,597,216 bytes
- SHA-256: `5A7C1B0C22965429B06C9085EF41D5D785BA6EE5BCA3FDFD7A2DF0C8CF29DA96`
- The original is kept unchanged. Working views must be derived tiles or
  downscaled previews so the 169 MB source does not need to be decoded in full
  for every inspection.

## What the photograph establishes

### High-confidence observations

1. The central area is a sea-of-gates/gate-array fabric. The repeated vertical
   columns are regular base cells with non-uniform custom routing. They are not,
   by themselves, evidence of one column per tile layer.
2. A complete pad ring surrounds the die, with substantial input/output cells
   and wide distribution routes at the top and bottom. Pin-first tracing is
   therefore practical and much more efficient than starting in the centre.
3. Long horizontal trunks cross the upper and lower control bands, while dense
   local routes enter the vertical gate columns. This is consistent with global
   address, data, clock, reset, and control distribution feeding many small
   counters, comparators, multiplexers, and latches.
4. No large dense SRAM macro is visible in the logic core. This agrees with the
   System 24 board and MAME model: tile-name and character storage are external
   RAM, while the 315-5292 supplies addressing, selection, timing, and pixel
   processing.
5. The die carries a 1987 marking and has the scale and pad count expected for
   the 160-pin QFP used on System 24.

### What one photograph cannot establish safely

- Package pin numbers until die orientation is correlated with the QFP bond
  diagram or board schematic.
- Logic polarity merely from route width or cell placement.
- Nets hidden by another metal layer, ambiguous crossings, or obscured vias.
- The logical role of a repeated gate column without tracing it to known pads.
- Power-on state or exact dynamic timing without board measurements.

If additional delayered scans exist, they are much more valuable than trying to
guess hidden connections in this single mosaic. Ask the image author/archive
whether diffusion, polysilicon, contact, and separate metal-layer images are
available before attempting a full transistor-level netlist.

## Known MAME contract

The local MAME sources `segaic24.cpp` and `segas24.cpp` establish the following
System 24 behavior:

- Four 64 x 64 tile-name tables arranged as two playfield/window pairs.
- 8 x 8, 4-bpp writable characters, 32 bytes per character.
- System 24 implements 4,096 characters (128 KB); the larger 16,384-character
  capability used with Model 1/2 is not populated on this board.
- Tile bits 11:0 select the character, bits 14:7 select the 8-bit palette,
  and bit 15 selects the tile category.
- Per-line horizontal scroll tables, 8-pixel window masks, pair-based special
  horizontal/vertical split modes, layer disable, and 9-bit wrapping.
- A 656 x 424 raster with a 496 x 384 active area at 16 MHz.
- System 24 maps ABSEL, XHOUT, XVOUT, and synchronization-mode writes on the
  315-5292 side, but current MAME leaves these writes as no-ops. Model 2 uses
  XHOUT/XVOUT callbacks as offsets for its 3D renderer.

## Core findings and source response from the decap review

These are evidence-backed targets, not conclusions derived from die shape.

| Priority | Area | Finding and source response | Remaining decap/schematic value |
| --- | --- | --- | --- |
| P0 | CPU decode | Implemented: the MAME mirror masks now separate tile RAM from retained ABSEL/XHOUT/XVOUT/sync latches; the unknown registers remain behaviorally inert. | Trace address, write-strobe, and register-flop paths to determine real side-register behavior. |
| P0 | Character RAM | Implemented: CPU A18:A17 are ignored and the window aliases a 128 KB physical character store. | Confirm which high character-address outputs are absent, tied, or unused on System 24. |
| P0 | Raster phase | Implemented from measured timing: active-origin HSync 539-586 (48 clocks), VSync 395-398 (4 lines). | Confirm reset phase, polarity, and whether side registers alter compare values. |
| P0 | Pen-zero backdrop | Implemented: tile validity is separate from raw palette/pen data and the mixer reproduces MAME's opaque category-zero fallback. | Trace pixel-zero detection and palette-output gating for hardware confirmation. |
| P0 | Special-mode priority | Implemented to the MAME contract: odd physical passes are suppressed and the selected pair member uses the even physical stream while retaining its tile category. | Determine whether silicon exports two pair streams or four streams plus select controls. |
| P1 | Pixel lanes | Character nibble order, CPU byte lanes, RAM mirroring, high-address fetches, and 9-bit wrap are covered by walking-nibble, standalone character-port, tile, and full-core bus tests. | Trace data pads through the input latches and pixel serializer; compare against real-board walking-nibble tests. |
| P1 | RAM arbitration | CPU-visible read/write timing and video fetch contention are abstracted by local RAM and an ahead-of-time SDRAM line renderer. | Trace RAM strobes, address muxes, and clock enables from known pads. |
| P2 | Mid-frame effects | The RTL renders approximately two lines ahead. MAME is frame-oriented and the real chip may expose different write-to-display latency. | Resolve with real-board write-at-raster tests after the static interface is correct. |

The existing implementation already follows MAME's high-level 64 x 64 tile
layout, per-line horizontal scrolling, mask RAM addressing, pair selection, and
9-bit coordinate wrap. Those portions should be preserved until a differential
test proves a mismatch.

## Work plan

### Phase 1 - Preserve and navigate the image

1. Keep the original outside source control and record its hash above.
2. Generate a coordinate-preserving image pyramid with 256- or 512-pixel
   tiles. Record all observations in original-image coordinates.
3. Establish orientation from the die mark, package pin-one marker, bond wires,
   and official schematic. Do not number pads before this is resolved.
4. Create an annotation overlay with separate layers for pads, power, clocks,
   buses, confirmed nets, hypotheses, and uncertain/obscured regions.

Deliverables:

- `docs/315-5292-observations.md`
- `research/315-5292/padmap.csv`
- `research/315-5292/hypotheses.csv`
- A tiled viewer/overlay kept out of the FPGA source list.

### Phase 2 - Build the package and board pin map

1. Obtain the original Sega System 24 schematics referenced by the Exodus
   technical-document archive.
2. Number all 160 package pins and map them to die pads.
3. Mark VCC/GND first using the schematic, repeated pad labels, and wide metal.
4. Locate the documented 16 MHz and 32 MHz clocks and reset.
5. Group CPU address/data/control, tile-name RAM, character RAM, pixel/palette,
   sync/blank, and inter-chip signals.
6. Record confidence and evidence for every mapping. A guessed signal must not
   be promoted to confirmed merely because it is adjacent to a similar pad.

This phase has the best return on effort: it can correct bus widths, ignored
address bits, byte lanes, strobes, and externally visible timing without a full
internal netlist.

### Phase 3 - Identify the gate-array cell library

1. Confirm the manufacturer/master-slice family from die identifiers and
   package records.
2. Select small, unobscured examples of inverter, NAND/NOR, latch/flip-flop,
   input buffer, output driver, and clock-buffer candidates.
3. Compare them with the vendor cell traces in Furrtek's SiliconRE collection.
4. Build a reusable cell sheet containing image template, transistor topology,
   symbol, pin order, and confidence.
5. Only automate template matching after manual examples agree across several
   locations. The repeated fabric makes false positives very easy.

### Phase 4 - Trace only the highest-value cones first

Do not attempt to netlist the entire central array in one pass. Trace from
known pads inward in this order:

1. Clock, reset, horizontal/vertical counters, blank and sync outputs.
2. CPU address decode for tile RAM, character RAM, ABSEL, XHOUT, XVOUT, and
   synchronization mode.
3. Character/tile RAM address muxes and read/write strobes.
4. Pair/window select, line-scroll address generation, and 8-pixel mask shift.
5. Character nibble serializer, palette/category outputs, and pen-zero gating.

For each cone, produce a small schematic and a behavioral statement before
translating it to RTL. Unresolved crossings remain explicit unknowns.

### Phase 5 - Maintain an evidence matrix

Each proposed behavior receives four columns:

| Item | MAME behavior | Board/schematic evidence | Die evidence | Confidence/action |
| --- | --- | --- | --- | --- |
| Example: character A12/A13 | Ignored on System 24 | RAM capacity/pin wiring | Output pad/net trace | Implement mirror only when two sources agree |

Rules:

- MAME behavior wins for the first compatibility implementation.
- A silicon-derived change needs either a complete trace or corroboration from
  the schematic/real board.
- Hardware behavior beyond MAME is added behind the same default state so it
  cannot break games that depend on the MAME-visible contract.
- Record rejected hypotheses as well as accepted ones.

### Phase 6 - Source-change order

1. Correct the CPU address windows and character-RAM mirroring.
2. Add explicit ABSEL/XHOUT/XVOUT/sync latches, initially preserving MAME's
   default no-op behavior where function is still unknown.
3. Correct fixed raster phase and sync width from measured timing.
4. Preserve palette color zero and valid/opaque state through the tile/mixer
   interface.
5. Rework special pair modes so selected window/playfield pixels use MAME's
   even-layer priority pass while retaining the selected tile's category.
6. Lock character nibble order, byte lanes, and address wrap.
7. Only then refine fetch arbitration and mid-scanline update latency from die
   and board evidence.

### Phase 7 - Verification after the PC is available

No verification executable or FPGA build is launched in the current phase.
When permitted later, use the smallest tests in this order:

1. Table-driven address/mirror checks for every 5292 window and register.
2. MAME-derived scanline vectors for all normal and special modes, both tile
   categories, mask extremes, all wrap boundaries, and pen-zero backdrops.
3. Differential frame/scanline comparison against the supplied MAME source.
4. Real-board captures for sync phase, register writes, RAM strobes, and
   write-to-display latency.
5. Verilator only after source/vector review, and Quartus only after behavioral
   convergence and when explicitly allowed.

## Suggested real-board experiments

If a System 24 board becomes available, a small test ROM gives more useful
evidence than passive game captures:

- Write one walking bit at a time to each side register and watch candidate die
  pins/sync outputs.
- Fill tile tables, window masks, and characters with unique binary signatures
  so each external address and data line can be identified.
- Change scroll/mask registers at controlled raster positions to measure the
  actual pipeline delay.
- Exercise character addresses `0x0000`, `0x0fff`, `0x1000`, and `0x3fff` to
  prove which high pattern bits are ignored on the System 24 board.
- Capture 16 MHz and 32 MHz input phase, RAM strobes, blank, sync, and pixel
  outputs on the same timebase.

## Payoff assessment

| Result | Expected payoff | Effort/risk |
| --- | --- | --- |
| Schematic-backed pad map | Very high: fixes interface, mirrors, clocks, and strobes | Moderate |
| Counter/decode cone traces | Very high: resolves current P0 issues and undocumented side registers | Moderate to high |
| Pixel serializer/window trace | High: resolves priority, pen-zero, and lane edge cases | High |
| Full-chip gate netlist | Potentially definitive, but unnecessary for initial game compatibility | Very high; blocked if layer imagery is incomplete |

The best immediate use of this photograph is therefore not a speculative full
netlist. It is a pin-led, MAME-guided extraction of the timing, decode, window,
and pixel-output cones that directly address known core gaps.
