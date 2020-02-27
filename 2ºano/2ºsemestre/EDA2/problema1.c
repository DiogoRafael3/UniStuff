#include <stdio.h>

int algarismos(int i)
{
	int counter = 1;
	if(i != 0)
	{	
		for(int o = 1;; o = o * 10)
		{	
			if(((i/o < 10) && (i/o >= 1)) || ((i/o > -10) && (i/o <= -1)))	
			{
				return counter;
			}
			counter++;
		}
	}
	return counter;
}

int main(void)
{
	int num;
	
	if(!(scanf("%d", &num)))
	{
		printf("Erro!\n");
	}
	
	else
	{
		printf("%d\n",algarismos(num));
	}
	return 0;
}