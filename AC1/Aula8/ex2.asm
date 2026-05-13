.global main
.text

main:


li a0, -3
jal abs


abs:

bgez a0, N
sub a0, zero, a0
N:
ret 