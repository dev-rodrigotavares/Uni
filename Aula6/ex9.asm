li a0, 5
mv t0, a0

li a0, 0
li t1, 0
li t2, 32
li t4, 1

ciclo:
bge t1, t2, fim
andi t3, t0, 0x1
addi t1, t1, 1
beq t3, t4, soma
toma:
srli t0, t0, 1
j ciclo

soma: 
addi a0, a0, 1
j toma

fim:

