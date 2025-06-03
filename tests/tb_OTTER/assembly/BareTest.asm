##########################################
# Simple test for the Barebones Otter

addi x10, x10, 10
add x8, x8, x10
lui x9, 6
sw x8,0(x9)
nop 
nop 
lw x11,0(x9)
addi x11, x11, 5
