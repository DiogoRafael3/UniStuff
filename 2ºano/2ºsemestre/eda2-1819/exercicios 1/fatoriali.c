#include <stdio.h>

unsigned long fatorial(int x){
	unsigned long fatorial=1;
	for(int i=1; i<=x; i++)
	{
		fatorial=fatorial*i;
	}
	return fatorial;
}

int main(void){
	printf("%lu\n", fatorial(10));
	printf("%lu\n", fatorial(20));
	printf("maior que 64 bits %lu\n", fatorial(21));
	return 0;
}