soma_array:


mv t0, a0  #ende
li t1, 0  #soma
li t2, 0  #contador
ciclo:
lw t3, 0(t0)
add t1, t1, t3
addi t0, t0, 4
addi t2, t2, 1
blt  t2, a1, ciclo

mv a0, t1
ret