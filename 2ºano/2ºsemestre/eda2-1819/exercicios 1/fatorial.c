#include <stdio.h>

unsigned long fatorial(int x){
	if(x==0)
		return 1;
	return x*fatorial(x-1);
}

int main(void){
	printf("%lu\n", fatorial(10));
	printf("%lu\n", fatorial(20));
	printf("maior que 64 bits %lu\n", fatorial(21));
	return 0;
}