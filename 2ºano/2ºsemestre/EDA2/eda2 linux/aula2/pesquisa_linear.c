#include <stdio.h>

#define POSICOES 50000

int procura(int n, int s, int v[s])
{
	for(int i = 0; i < s; i++)
	{
		if(n == v[i])
			return i;
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

	for (int i = 1; i <= POSICOES; ++i)
  	{
    	int p = procura(2 * i, POSICOES, array);

    	if (p == -1)
      		printf("Não encontrou %d\n", 2*i);
    	
    	else if(array[p] != 2 * i)
     		printf("Encontrou %d na posição errada: %d\n", 2*i, p);
  	}

  	printf("%d\n", procura(-5, POSICOES, array));
  	printf("%d\n", procura(5000000, POSICOES, array));
  	printf("%d\n", procura(3, POSICOES, array));

  	return 0;

}