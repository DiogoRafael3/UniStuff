#include <stdio.h>

int algarismos(int n){
	int resultado=0;
	if (n<0)
      	n=n*-1;
    if (n==0)
    	return resultado=1;
    for (float i=n ; i>=1; i=i/10)
    	resultado++;
    return resultado;
}

int main(void){
	int x;
	scanf("%d", &x);
	int answer= algarismos(x);
	printf("%d\n", answer);
}