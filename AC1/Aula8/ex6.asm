array_max:

addi sp, sp, -4
sw ra, 0(sp)

mv t0, a0
mv t2, a1
li t3, 1

lw a0, 0(t0)

ciclo:
lw a1, 4(t0)
jal max
addi t3, t3, 1
addi t0, t0, 4
blt t3, t2, ciclo


lw ra, 0(sp)
addi sp, sp, 4
ret

