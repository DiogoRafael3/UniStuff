#include <stdio.h>

void fibonnaci(void)
{
	
	int a = 0;
	int b = 1;
	printf("%d %d ", a, b);
	
	for(int i = 0; i < 9; ++i){
		a = a + b;
		b = a + b;

		printf("%d %d ", a, b);
		
	}
}

int main(void)
{
	fibonnaci();
	return 0;
}