.global main
.text

belong:

mv t0, a0
mv t1, a1
li t2, '\0'

Ciclo:
lb t3, 0(t1)
beq t3, t0, Encontrou
beq t3, t2, Acabou
addi t1, t1, 1
j Ciclo


Encontrou:
li a0, 1
ret

Acabou:
li a0, 0
ret
