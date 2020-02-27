#include <stdio.h>

int maior(int x, int y){
	if(x<y)
		return y;
	else if(y<x)
		return x;
	else
		return 0;
	//return x > y ? x : y;
}

int main(void){
	int x, y;
	printf("valores de x e y:");
	scanf("%d %d", &x, &y);

	printf("o valor maior é: %d\n", maior(x,y));
	return 0;
}