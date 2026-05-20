.global main
.text

log:

addi sp, sp, -4
sw ra, 0(sp)


li t1, 1

bne t0, t1, Rec
li a0, 0
ret

li a0, 0
j Fim


Rec:
srli a0, a0, 1
jal log
addi a0, a0, 1


Fim:
lw ra, 0(sp)
addi sp, sp, 4
ret

