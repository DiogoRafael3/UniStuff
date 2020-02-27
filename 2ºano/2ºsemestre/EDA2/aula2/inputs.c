#include <stdio.h>



int main(void)
{
	int f;
	scanf("%d", &f);
	printf("%d\n", f);

	int i;
	int o;
	scanf("%d + %d =", &i, &o);
	printf("%d\n", i + o);

	float real;
	scanf("%f", &real);
	printf("%f\n", real);

	float x1;
	float y1;
	scanf(" (%f, %f)", &x1, &y1);
	printf("%.3f, %.3f\n", x1, y1);

	return 0;
}