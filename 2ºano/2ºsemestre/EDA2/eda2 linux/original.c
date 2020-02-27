#include <stdio.h>
#include <string.h>

#define POSICOES 1101
#define ALFABETO 28

void empty_char(char decripted[], int size)
{
	for(int k = 0; k < size; k++)
	{
		decripted[k] = ' ';
	}
}

void empty_int(int pontos[POSICOES])
{
	for(int j = 0; j < ALFABETO; j++)
	{
		pontos[j] = 0;
	}
}


void decription(char linha[POSICOES])
{

	char decripted[ALFABETO] = {' '};
	
	int pontos[ALFABETO] = {0};
	int posicao = 0;
	int estar = 0;

	for(int i = 0; linha[i] != '\0'; ++i)
	{
		for(int o = 0; decripted[o] != '\0'; ++o)
		{

			if(linha[i] == decripted[o])
			{
				printf("%c", decripted[o]);
				empty_char(decripted, ALFABETO);
				empty_int(pontos);
				posicao = 0;
				estar++;
			}
			
			
		}
		
		if(estar == 0)
		{
			decripted[posicao] = linha[i];
			pontos[posicao] = pontos[posicao] + 1;
			posicao++;
		}
		

		estar = 0;
	}

	empty_char(decripted, ALFABETO);
	empty_int(pontos);

	

}

int main(void)
{
	char linha[POSICOES] = {' '};

	while(scanf(" %s",linha) != EOF)
	{

		decription(linha);
		printf("\n");
	}

	return 0;
}