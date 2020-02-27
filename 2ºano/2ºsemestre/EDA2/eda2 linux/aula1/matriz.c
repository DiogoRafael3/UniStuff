#include <stdio.h>


void matriz(void)
{
	int t = 1;

	for(int i = 1; i <= 10; ++i)
	{
		for(int o = 0; o < 10; ++o)
		{
			
			
			printf("%3d", t);

			t = t + i;
		}
		t = i + 1;
		printf("\n");
	}

}

int main(void)
{

	matriz();
	return 0;
}