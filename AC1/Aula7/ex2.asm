.data
Hello: .string  "hello world"

.text

la t0, Hello

ciclo:

lb t1, 0(t0)
beq zero, t1, fim

addi t2, zero, 'a'
blt t1, t2, dep

addi t2, zero, 'z'
blt t2, t1, dep

addi t1, t1, -32
sb t1, 0(t0)

dep:
addi t0, t0, 1
jal zero, ciclo

fim: