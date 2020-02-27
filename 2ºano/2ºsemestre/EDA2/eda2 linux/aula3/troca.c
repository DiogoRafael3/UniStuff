#include <stdio.h>

void troca(int * a, int * b)
{
	int c = *a;
	*a = *b;
	*b = c;


}

int main(void)
{
	int a, b;

	printf("Insira dois inteiros: ");
	scanf("%d %d", &a, &b);

	printf("a = %d, b = %d\n", a, b);

	troca(&a, &b);

	printf("a = %d, b = %d\n", a, b);

	return 0;
}