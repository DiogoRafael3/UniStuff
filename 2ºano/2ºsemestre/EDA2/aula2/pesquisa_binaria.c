#include <stdio.h>

/*
#define POSICOES 50000

int auxiliar(int i, int max, int min, int v[POSICOES])
{
	int half = max / 2;
	if(v[half] == i)
	{
		return half;
	}

	else if(v[half] > i)
	{
		max = half;
		auxiliar(i, max, min, v);
	}
		
	else if(v[half] < i)
	{
		min = half;
		auxiliar(i, max, min ,  v);
	}

	if (min == max)
	{
		return max;
	}
	
	return -1;


}




int main(void)
{
	int array[POSICOES];
	for(int i = 0, o = 2; i < POSICOES; i++ )
	{
		array[i] = o;
		//printf("%d\n", array[i]);
		o+=2;
	}

	// for (int i = 1; i <= POSICOES; ++i)
 //  	{
 //    	int p = procura(2 * i, POSICOES, array);

 //    	if (p == -1)
 //      		printf("Não encontrou %d\n", 2*i);
    	
 //    	else if(array[p] != 2 * i)
 //     		printf("Encontrou %d na posição errada: %d\n", 2*i, p);
 //  	}

 
  	printf("%d\n", auxiliar(10, POSICOES, 0, array));
  	return 0;

}*/

int main(void)
{

	int numb = 0;
	int first = 0;
	int second = 0;
	int third = 0;
	scanf("%d\n", &numb);
	int first_route[numb];
	int second_route[numb];
	int third_route[numb];
	for(int i = 0; i < numb; i++)
	{
		scanf("%d.%d.%d.0\n", &first, &second, &third);
		first_route[i] = first;
		second_route[i] = second;
		third_route[i] = third;
		printf("%d %d %d\n", first_route[i], second_route[i], third_route[i]);
	}
}
