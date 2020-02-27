#include <stdio.h>

unsigned long fatorial(int o)
{	
	int p = 1;
	for(int i = o; i >1 ; --i){
		p = p * i;
	}

	return p;
}

int main(void)
{
	printf("o fatorial de 10 e %lu\n", fatorial(10));
	printf("o fatorial de 20 e %lu\n", fatorial(20));
	printf("o fatorial de 21 e %lu\n", fatorial(21));
	return 0;
}