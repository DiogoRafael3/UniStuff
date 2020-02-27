#include <stdio.h>

int main(void){
	int x=1;
	for (int i=1; i<=10; i++)
	{
		for (int j=1; j<=10; j++){//<10
			printf("%*d ", 3, x);
			x=x+i;
			//printf(i*j)
		}
		//printf(i*j\n
		printf("\n");
		x=i+1;
	}
	return 0;
}