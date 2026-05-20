.global main
.text

belong:

addi sp, sp, -4
sw ra, 0(sp)

li t0, '\0'

lb t2, 0(a1)
bne t2, t0, Passa
li a0, 0
j Fim

Passa:

beq a0, t2, Encontrou

addi a1, a1, 1
jal belong
j Fim


Encontrou:
li a0, 1

Fim:

lw ra, 0(sp)
addi sp, sp, 4
ret