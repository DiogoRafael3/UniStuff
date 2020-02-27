##Frequencia 15/11/2011

'''
 Sabendo que a ´area da superf´ıcie de uma esfera ´e dada pela f´ormula A = 4πr2
escreva
um programa que pede ao utilizador o raio e escreve a ´area correspondente.
'''

def area_esfera():

    r = input ('Introduza o valor do raio:')
    area = 4 * 3.14 * float(r)**2

    print ('o valor da area e:',area)

#area_esfera()

'''
Escreva uma fun¸c˜ao centrar que recebe uma string como argumento e escreve tal string
com espa¸cos suficientes `a esquerda de modo a que ela fique centrada numa linha de 80
caracteres.
'''

def centrar (s):
    e= int((80 - len(s))/2)
  
    print ( ' '*e + str(s) + ' '*e)

#centrar('maria') 

'''
Desenvolva uma fun¸c˜ao que recebe um inteiro positivo n e escreve o produto dos inteiros
de 1 a n.
''' 

def produto_inteiros(n):
    i=1
    while n>0:
        i = i * n
        n= n-1
    print (i)
        


#produto_inteiros(5)


'''Considere o seguinte teste para verificar se trˆes comprimentos podem formar um triˆangulo:
Se algum dos trˆes comprimentos ´e maior que a soma dos outros dois, ent˜ao
podemos formar um triˆangulo. De outro modo, n˜ao podemos.
Implemente uma fun¸c˜ao ´e tri^angulo que recebe como argumento trˆes inteiros e escreve
True ou False caso seja poss´ıvel ou n˜ao, respectivamente, formar um triˆangulo com
tais comprimentos.
'''
def e_triangulo (a,b,c):

    if a > c+b or b> a+c or c> a+b:
        print (True)
    else:
        print (False)

#e_triangulo (2,5,3)

'''
O resultado da divis ̃ao inteira de um nu ́mero inteiro por outro
nu ́mero inteiro pode ser obtido utilizando apenas o operador de subtracc ̧ ̃ao.
Assim, se quisermos calcular 7 ÷ 2, basta subtrair o dividendo (2)
ao divisor (7), sucessivamente, at ́e que o resultado seja menor do que o
dividendo (7 − 2, 5 − 2 e 3 − 2). O nu ́mero de subtrac ̧c ̃oes realizadas
corresponde ao quociente inteiro. Utilizando este algoritmo, proponha uma
fun ̧c ̃ao para calcular a divis ̃ao inteira que seja:

'''
#(a) recursiva

def devint (a,b):
    if a<b:
        return False
    else:
        return 1+ devint(a-b,b)

    
print (devint(7,2))



# (b) iterativa

def divisao_inteira(a,b):
    
    contador = 0
    if a==b==1:
        contador=1
    else: 
        while a!=1:
            a=a-b
            contador+=1
    print (contador)

#divisao_inteira(1,1)



"""
7. Um prefixo de um string T = t0...tn  ́e uma string T′ = t0...tm, com m ≤ n.
Por exemplo ban  ́e prefixo de banana. Sabendo que a string vazia  ́e prefixo de
todas as strings:
(a) implemente uma func ̧ ̃ao prefixo que recebe como argumentos duas strings e
de- volve um booleano que indica se a primeira  ́e um prefixo da segunda.

"""

def prefixo (a,b):

    if len(a)<len(b):
        for i in range (len(a)):
            if a[i]!=b[i]:
                return False
            else:
                return True

    else:
        return False

#print (prefixo('ban','banana'))








        
    
