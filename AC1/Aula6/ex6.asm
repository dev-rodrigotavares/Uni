li t0, 1
li t1, 5
li t2,  0x10010020

ciclo:
bge t0, t1, fim
sw t0, 0(t2)
addi t2, t2, 4
addi t0, t0, 1
beq zero, zero, ciclo

fim: