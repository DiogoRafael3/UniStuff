#include <stdio.h>

int main(void)
{
	int valor1;
	int valor2;
	
	printf("valor1: ");
	scanf("%d", &valor1);

	printf("valor2: ");
	scanf("%d", &valor2);

	if(valor1 > valor2)
	{
		printf("%d\n", valor1);
	}

	else if(valor1 < valor2)
	{
		printf("%d\n", valor2);
		
	}

	else
	{
		printf("Os valores sao iguais\n");
	}

	return 0;
}