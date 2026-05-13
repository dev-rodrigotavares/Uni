.global main
.text

main:

li a0, 2
li a1, 5

jal max







max:
bge a0, a1, M
mv a0, a1
M:
ret

