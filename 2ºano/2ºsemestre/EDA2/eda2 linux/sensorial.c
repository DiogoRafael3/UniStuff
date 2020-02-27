#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define ASSOCIADOS 300

struct sensores
{
	int tamanho;
	int array[ASSOCIADOS];
};


struct sensores* sensores_construtor(int max)
{
	struct sensores* novo = (struct sensores*)malloc(max*sizeof(struct sensores));

	return novo;
}


bool auxiliar(int i, int max, int min, int v[ASSOCIADOS], int *final)
{
	int half = ((max - min)/ 2) + min;
	
	if(v[half] == i)
	{	
		*final  = half;
		return true;
	}

	if (min >= max)
	{
		return false;	
	}

	else if(v[half] > i)
	{

		max = half -1;
		return auxiliar(i, max, min, v, final);
	}
	
	else if(v[half] < i)
	{
		min = half + 1;
		return auxiliar(i, max, min ,  v, final);

	}

	return false;
	
}

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

void add(int num1, int num2, struct sensores* sensor)
{

	sensor[num1].array[sensor[num1].tamanho] = num2;
	
	sensor[num1].tamanho +=1;

}

void remover(int num1, int num2, struct sensores* sensor)
{
	int final;
	
	qsort(sensor[num1].array, (sensor[num1].tamanho) - 1, sizeof(int), cmpfunc);
	
	auxiliar(num2,(sensor[num1].tamanho) - 1, 0, sensor[num1].array, &final);

	sensor[num1].array[final] = 0;
	for(int u = final; u < ((sensor[num1].tamanho)-1); u++)
	{
		sensor[num1].array[u] = sensor[num1].array[u+1];
	}

	sensor[num1].tamanho-=1;


}

bool procura(int numero, int sensors[numero], struct sensores* sensor)
{
	int final = 0;
	for(int k = 0; k < numero - 1; k++)
	{
		if(sensor[sensors[k]].tamanho == 0)
		{
			return false;
		}
		else
		{	
			qsort(sensor[sensors[k]].array, (sensor[sensors[k]].tamanho), sizeof(int), cmpfunc);
			if(auxiliar( sensors[k + 1],(sensor[sensors[k]].tamanho) - 1, 0, sensor[sensors[k]].array, &final) == 0)
			{
				return false;
			}
		}
	}
	return true;
}


int main(void)
{

	int nsensores;
	scanf("%d\n", &nsensores);
	struct sensores* sensor  = sensores_construtor(nsensores);
	
	char operacao;
	int num1;
	int num2;
	int nliga;
	
	while(scanf("%c\n", &operacao) != EOF)
	{
		switch(operacao)
		{
			case '+':
				scanf("%d %d\n", &num1, &num2);
				add(num1, num2, sensor);
				break;

			case '-':
				scanf("%d %d\n", &num1, &num2);
				remover(num1, num2, sensor);
				break;

			case '?':
			{
				scanf("%d\n", &nliga);
				int liga[nliga+1];
				for(int h = 0; h <= nliga; h++)
				{
					int temp;
					scanf("%d", &temp);

					liga[h] = temp;
				}

				bool search = procura(nliga + 1, liga, sensor);
				if(search == 1)
					printf("yes [%d..%d]\n", liga[0], liga[nliga]);

				else
					printf("no [%d..%d]\n", liga[0], liga[nliga]);
				
				break;
			}

			default:
				break;

		}
	}
	
	return 0;
}