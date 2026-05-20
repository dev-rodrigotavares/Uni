.global main
.text
main:

li t0, 0
li t1, 8
li t2, 1


Ciclo:
srai t1, t1, 1
addi t0, t0, 1
bne t1, t2, Ciclo

