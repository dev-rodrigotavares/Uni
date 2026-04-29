blt  a1, a0, zero_res      

add  t0, zero, zero        
add  t1, zero, a0         

ciclo:
andi t2, t1, 1            
bne  t2, zero, proximo
add  t0, t0, t1            

proximo:
beq  t1, a1, fim_soma   
addi t1, t1, 1           
beq  zero, zero, ciclo    

fim_soma:
add  a0, zero, t0          
beq  zero, zero, fim

zero_res:
add  a0, zero, zero        

fim:

#5 R: 2(3+ 5*5 + 6*4 + 2)= 116 nanosegundos 