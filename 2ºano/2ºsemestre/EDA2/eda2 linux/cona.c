#include <stdio.h>
#include <string.h>

#define POSICOES 1101
#define ALFABETO 28

void empty_char(char decripted[])
{
	for(int k = 0; k < strlen(decripted); k++)
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
	

int main(void)
{
	char linha[POSICOES];
	int f = 0;
	char decripted[ALFABETO];
	int pontos[ALFABETO];
	int posicao = 0;
	char final[POSICOES];
	char finalfinal[20][POSICOES];
	int final_array = 0;
	int estar = 0;

	while(scanf("%s",linha) != EOF)
	{
		
		

		for(int i = 0; i < strlen(linha); i++)
		{
			for(int o = 0; o < strlen(decripted); o++)
			{

				if(linha[i] == decripted[o])
				{
					
					final[final_array] = decripted[o];
					final_array++;
					empty_char(decripted);
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
		final[final_array] = '\0';

		empty_char(decripted);
		empty_int(pontos);

		
		if(final[0] != '\0')
			printf("%s\n", final);


		finalfinal[f] = final;
		f++;
	}

	for(int s = 0; s < strlen(finalfinal); s++)
	{
		printf("%s\n", finalfinal[s]);
	}		
	
	return 0;
	
}


	
