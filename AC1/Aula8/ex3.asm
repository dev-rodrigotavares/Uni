.global main
.text

main:


li a0, -3
jal abs


abs:
addi sp, sp, -4
sw ra, 0(sp)

sub a1, zero, a0
jal max


lw ra, 0(sp)
addi sp, sp, 4

ret
   

max:
bge a0, a1, M
mv a0, a1
M:
ret

