#include <stdio.h>

unsigned long fatorial(int i)
{	
	if(i != 0){
		return i * fatorial(i-1);
	}
	return 1;
}

int main(void)
{

	printf("fatorial de 10 e %lu\n", fatorial(10));
	printf("fatorial de 20 e %lu\n", fatorial(20));
	printf("fatorial de 21 e %lu\n", fatorial(21));

	return 0;
	
}