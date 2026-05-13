.data

String: .string "Bom dia"

.text

la t0, String
li t2, 0

ciclo:
lb t1, 0(t0)
addi t0, t0, 1
addi t2, t2, 1
bnez t1, ciclo

addi t2, t2, -1

fim: