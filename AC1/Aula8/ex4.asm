.global main
.text

main:
li a0, 3
li a1, 5
li a2, 2
jal max3 

max3:
addi sp, sp, -4
sw ra, 0(sp)

jal max

mv a1, a2
jal max

lw ra, 0(sp)
addi sp, sp, 4

ret



max:
bge a0, a1, M
mv a0, a1
M:
ret

