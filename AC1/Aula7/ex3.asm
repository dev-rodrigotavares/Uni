.data

Array: .word 1, 5, -2, 4


.text

la t0, Array
li t1, -100
li t3, 4
li t5, 0
ciclo:
lw t2, 0(t0)

blt t2, t1, nao
mv t1, t2

nao:
addi t0, t0, 4
addi t5, t5, 1
blt t5, t3, ciclo

fim:
