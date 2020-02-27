.data
frase: .asciiz "hello"
.text

la $t0, frase
addi $t1,$t1,0

SOM:
lb $t2,0($t0)
addi $t1,$t1,1
bne $t2,$zero,SOM
addi $t0,$t0,1



