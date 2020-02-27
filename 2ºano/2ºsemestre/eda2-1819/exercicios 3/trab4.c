#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 27//o numero maximo possivel de letras até encontrar a mesma letra(ou seja a..(24)..a, como só há 25 letras no alfabeto) + o \0 no fim
#define MAXSIZE 1101

void add(char *array, int current, char letter){//função simples para adicionar um elemento letter ao array no elemento current
	array[current]=letter;
}

void empty(char *array){//função para "esvaziar" o array, substitui todas as posições do array por ' ' pois o find é feito com uma comparação do carater atual a ' '
	for(int i=0; i<SIZE;i++)
		array[i]=' ';
}

bool find(char *array, char letter){//função para encontrar uma letra no array, retorna true se encontrar e false se não encontrar, apenas procura enquanto os elementos forem diferentes de ' '
	for(int i=0; array[i]!=' '; i++){
		if(array[i]==letter){
			return true;
		}
	}
	return false;
}

int main(void){	char character;
	char *array=malloc(SIZE*sizeof(char));//alocar espaço na memória para o array que vai ser utilizado
	char *string=malloc(MAXSIZE*sizeof(char));//alocar espaço na memória para o array que vai ser printado
	int current=0;
	int relevant=0;
	empty(array);//preencher o array com espaços brancos
	while(scanf("%c",&character)!=EOF){//leitura do atual char no input até o input ser CTRL+D
		if(find(array,character)==false && character!='\n'){//algoritmo simples para encontrar a segunda ocorrência da letra e escreve-la com prints
			add(array,current,character);
			current++;
		}
		else if(find(array,character)==true){
			add(string,relevant,character);
			empty(array);
			relevant++;
			current=0;
		}
		else if(character=='\n'){
			add(string,relevant,character);
			empty(array);
			relevant++;
			current=0;
		}
	}
	add(string,relevant,'\0');
	printf("%s", string);
	free(array); free(string);//libertar o espaço do array
	return 0;
}