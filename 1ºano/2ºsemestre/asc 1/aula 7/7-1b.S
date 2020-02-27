.data

frase: .asciiz "hello again"
espaco: .space 12

.text

la $t0,frase
la $t2,espaco

copiar:
lb $t1,0($t0)
addi $t0,$t0,1
sb $t1,0($t2)
bne $t1,$zero,copiar
addi $t2,$t2,1

