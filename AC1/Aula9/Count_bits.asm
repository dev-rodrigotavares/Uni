.global main
.text

count_bits:

li t3, 0
li t4, 32
mv t0, a0
li t2, 0

Ciclo:
andi t1, t0, 1
add t2, t2, t1
srai t0, t0, 1
addi t3, t3, 1
blt t3, t4, Ciclo

mv a0, t2
ret