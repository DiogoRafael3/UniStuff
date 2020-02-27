#include <stdio.h>

int fibonnaci(int n)
{
	if(n == 0)
	{
		return 0;
	}

	if(n == 1){
		return 1;
	}

	return fibonnaci(n - 1) + fibonnaci(n - 2);

}


int main(void)
{
	for(int i = 0; i < 20; ++i)
	{
		printf("%d ", fibonnaci(i));
	}
	return 0;
}