.data

Array: .word 1, 5, -2, 4


.text

la t0, Array

lw t1, 0(t0)
lw t2, 12(t0)
sw t1, 12(t0)
sw t2, 0(t0)


lw t1, 4(t0)
lw t2, 8(t0)
sw t1, 8(t0)
sw t2, 4(t0)

fim: