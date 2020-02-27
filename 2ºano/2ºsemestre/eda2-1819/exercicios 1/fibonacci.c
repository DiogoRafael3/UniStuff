#include <stdio.h>

int fibonacci(int x){
	if(x<2)
		return x;
	else
		return fibonacci(x-1) + fibonacci(x-2);

}

int main(void){
	printf("%d\n", fibonacci(20));
	return 0;
}