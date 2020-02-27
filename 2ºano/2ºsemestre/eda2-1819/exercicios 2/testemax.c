#include <stdio.h>

int max(int a, int b){
	return a>b ? a : b;
}

int main(void){
	printf("%d",max(2,2));
}