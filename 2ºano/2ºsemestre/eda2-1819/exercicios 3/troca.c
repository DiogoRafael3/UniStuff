#include <stdio.h>

void troca(int * a, int * b){
	int buffer1;
	int buffer2;

	buffer1= *a;
	buffer2= *b;

	*a=buffer2;
	*b=buffer1;

}


int main(void){
	int a,b;

	scanf("%d %d", &a, &b);

	printf("antes -> a: %d b: %d\n", a, b);

	troca(&a,&b);

	printf("depois -> a: %d b: %d\n", a, b);


}