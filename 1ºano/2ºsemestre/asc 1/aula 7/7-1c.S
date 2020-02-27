.data

frase: .asciiz "hello again"
espaco: .space 5

.text

la $t0,frase
la $t2,espaco
addi $t3,$t3,5

copiar:

lb $t1,0($t0)
addi $t0,$t0,1
sb $t1,0($t2)
addi $t3,$t3,-1
bne $t3,$zero,copiar
addi $t2,$t2,1