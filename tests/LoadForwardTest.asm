# Bare bones HAZARD testing 
# Forwarding - LOAD-USE and Data Hazards

# to-do : implement control hazards

##########################################
# Simple test for the Barebones Otter

addi x10, x10, 10
add x8, x8, x10
lui x9, 6
sw x8,0(x9)
lw x11,0(x9)
addi x11, x11, 5
lui x12, 6
sw x12,0(x9)
lw x12,0(x9)
lw x7,0(x12)
addi x12, x12, 8
lw x9,0(x12)
add x9, x9, x8
