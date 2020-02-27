.data

frase: .asciiz "ola"
espaco: .space 4
fras: .asciiz "bye"

.text

la $t0,frase
la $t1,fras
la $t2,espaco

check:
addi $t0,$t0,1
lb $t3,0($t0)
bne $t3,$zero,check
nop

adi:
lb $t3,0($t1)
sb $t3,0($t0)
addi $t0,$t0,1
addi $t1,$t1,1
bne $t3,$zero,adi
nop