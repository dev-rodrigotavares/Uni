blt  a1, a0, zero_res     

add  t0, zero, zero       
add  t1, zero, a0         

ciclo:
add  t0, t0, t1           
beq  t1, a1, fim_soma     
addi t1, t1, 1            
beq  zero, zero, ciclo    

fim_soma:
add  a0, zero, t0         
beq  zero, zero, fim

zero_res:
add  a0, zero, zero       

fim: