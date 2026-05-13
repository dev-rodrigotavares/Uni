.data
Hello: .string  "hello world"

.text

la t0, Hello

ciclo:

lb t1, 0(t0)
beqz t1, fim

li t2, 'a'
blt t1, t2, dep

li t2, 'z'
bgt t1, t2, dep

addi t1, t1, -32

sb t1, 0(t0)

dep:
addi t0, t0, 1
j ciclo

fim: