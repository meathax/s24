# IKAOPM provenance

- Upstream: https://github.com/ika-musume/IKAOPM
- Revision: `08a5b40ed14418319287df450f7d4a523ddeed5e`
- Revision date: 2024-08-31
- License: BSD-2-Clause; see `LICENSE`
- Imported: `src/IKAOPM.v`, `src/IKAOPM.qip`, and
  `src/IKAOPM_modules/*.v`, plus the upstream README and license.
- Excluded: upstream testbench, images, spreadsheets, datasheets, and
  schematics.

The imported RTL is byte-identical to that upstream revision. The System 24
integration is implemented in `rtl/s24_core.sv` and is not carried as a donor
patch.
