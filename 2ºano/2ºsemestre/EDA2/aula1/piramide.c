#include <stdio.h>


void piramide(void)
{
	int counter = 1;
	for(int i = 1; i <= 10; ++i)
	{
		for(int o = 1; o <= i; ++o)
		{
			printf("%5d", counter);
			counter = counter + i;
			
		}
		printf("\n");
		counter = i + 1;
	}
}


int main(void)
{
	piramide();
	return 0;
}