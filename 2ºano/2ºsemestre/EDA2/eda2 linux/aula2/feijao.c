#include <stdio.h>

void feijoes(int size, int lista[size])
{
	int min = 0;
	int max = size -1;	
	int counter = 1;
	int girlcounter = 1;
	int rapaz = 0;
	int rapariga = 0;

	while(counter != size)
	{
		if (counter % 2 != 0)
		{
			if(lista[min] > lista[max])
			{
				rapaz = rapaz + lista[min];
				min = min + 1;
				counter++;
			}

			else
			{
				rapaz = rapaz + lista[max];
				max = max - 1;
				counter++;
			}
		}

		else
		{
			if(girlcounter % 2 != 0)
			{
				
				if(lista[min] < lista[max])
				{
					rapariga = rapariga + lista[min];
					min = min + 1;
					girlcounter++;
					counter++;
				}

				else
				{
					rapariga = rapariga + lista[max];
					max = max - 1;
					girlcounter++;
					counter++;
				}
			}

			else
			{
				if(lista[min] > lista[max])
				{
					rapariga = rapariga + lista[min];
					min = min + 1;
					girlcounter++;
					counter++;

				}

				else
				{
					rapariga = rapariga + lista[max];
					max = max - 1;
					girlcounter++;
					counter++;
				}
			}
		}
	}
	rapariga = rapariga + lista[max];
	
	if(rapaz > rapariga)
		printf("Alex ganha com %d contra %d\n", rapaz,rapariga);

	
	else if(rapaz < rapariga)
		printf("Bela ganha com %d contra %d\n", rapariga,rapaz);

	else
		printf("Alex e Bela empatam a %d\n", rapaz);	
}

int main(void)
{
	int montes;
	scanf("%d\n", &montes);
	int numeros[montes];

	if(montes >= 2 && montes <= 100)
	{
		for(int i = 0; i < montes; i++)
		{
			int posicoes;
			scanf("%d", &posicoes);

			if(posicoes <= 200 && posicoes >= 1)
				numeros[i] = posicoes;
		}
	}

	if(montes % 2 != 0)
		printf("Erro!\n");
		
	else
		feijoes(montes, numeros);

	return 0;
}