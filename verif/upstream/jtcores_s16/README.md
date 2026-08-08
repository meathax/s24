# JTCORES FD1094 verification reference

These files are retained as an auditable reference copy of the upstream
JTCORES System 16 FD1094 implementation. They are not included in the
System 24 production synthesis file list.

Source: https://github.com/jotego/jtcores/tree/master/cores/s16/hdl
Snapshot: jtcores master at 2540976bcc930a0dbc099a92baefdebac2810b52

The production System 24 wrapper remains rtl/cpu/s24_fd1094.s because its
key-window protocol, instruction-boundary timing, and state handling are
System 24-specific. These modules provide a compact upstream oracle for
equation and control-state comparisons.
