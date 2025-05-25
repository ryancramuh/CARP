##########################################
# Simple test for the Barebones Otter

addi x10, x10, 10
nop
nop
add x8, x8, x10
nop
nop
lui x9, 6
nop
nop
nop
sw x8,(x9)
nop 
nop 
lw x11,0(x9)
