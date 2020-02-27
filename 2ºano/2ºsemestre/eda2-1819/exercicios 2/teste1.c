#include <stdio.h>

int main(void){
	int i;
	scanf("%d", &i);
	printf("%d\n", i);

	int a,b;
	scanf("%d + %d =", &a , &b);
	printf("%d\n", a+b);

	float c;
	scanf("%f", &c);
	printf("%f\n", c);

	//necessita de um espaço antes do conteudo do scan para evitar arrastar o scan de trás
	float f1,f2;
	scanf(" (%f , %f)", &f1, &f2);
	printf("%.3f, %.3f\n", f1, f2);

	return 0;
}