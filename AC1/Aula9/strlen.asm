.global main
.text


strlen:

li t0, '\0'
li t1, -1
mv t3, a0

Ciclo:
lb t2, 0(t3)
addi t1, t1, 1
addi t3, t3, 1
bne t2, t0, Ciclo  

mv a0, t1
ret

