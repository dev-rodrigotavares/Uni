.global main
.text

count_bits:

addi sp, sp, -8
sw ra, 0(sp)
sw s0, 4(sp)


li t1, 0
bne a0, t1, Rec

li a0, 0
j Fim

Rec:
mv s0, a0
andi s0, s0, 1
srli a0, a0, 1
jal count_bits
add a0, a0, s0


Fim:
lw ra, 0(sp)
lw s0, 4(sp)
addi sp, sp, 8
ret
