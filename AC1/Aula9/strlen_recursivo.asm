.global main
.text

strlen:
addi sp, sp, -4
sw ra, 0(sp)


li t1, '\0'

lb t0, 0(a0)
bne t0, t1, Rec
li a0, 0
j Fim

Rec:
addi a0, a0, 1
jal strlen
addi a0, a0, 1

Fim:
lw ra, 0(sp)
addi sp, sp, 4
ret
