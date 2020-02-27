#include <stdio.h>

int fibonacci(int x){
	int start=0;
	int follow=1;
	int result=0;
	for (int i=x; i>=2; i--)
	{
		result=start+follow;
		start=follow;
		follow=result;
	}
	return result;

}

int main(void){
	printf("%d\n", fibonacci(20));
	return 0;
}