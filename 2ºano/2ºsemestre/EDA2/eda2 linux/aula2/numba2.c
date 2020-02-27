#include <stdio.h>

int min;
int max;

int boy(int size, int lista[size], int rapaz, int min, int max)
{
	
	if(lista[min] > lista[max])
	{
		rapaz = rapaz + lista[min];
		min = min + 1;
		

	}

	else
	{
		rapaz = rapaz + lista[max];
		max = max - 1;

	}
	return rapaz;
}

int girl(int size, int lista[size], int rapariga, int girlcounter, int min, int max)
{
	

	if(girlcounter % 2 != 0)
	{
		if(lista[min] < lista[max])
		{
			rapariga = rapariga + lista[min];
			min = min + 1;
			
			

		}

		else
		{
			rapariga = rapariga + lista[max];
			max = max - 1;
			
			
		}
	}

	else
	{
		if(lista[min] > lista[max])
		{
			rapariga = rapariga + lista[min];
			min = min + 1;
			
			

		}

		else
		{
			rapariga = rapariga + lista[max];
			max = max - 1;
			
		}
	}
	return rapariga;
}

void comparar(int size, int lista[size])
{
	int min = 0;
	int max = size;
	int counter = 1;
	int girlcounter = 1;
	int rapaz = 0;
	int rapariga = 0;

	while(counter != size)
	{
		if (counter % 2 != 0)
		{
			boy(size, lista, rapaz, min, max);
			counter++;
			printf("%d %d\n",min, max );
		}

		else
		{
			girl(size, lista, rapariga, girlcounter, min, max);
			counter++;
			girlcounter++;
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
		comparar(montes, numeros);

	return 0;
}