#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 300000
#define ASSOCIADOS 300

struct sensores
{
	
	bool array[100000];

};

struct sensores* sensores_construtor()
{
	struct sensores* novo = (struct sensores*)malloc(MAX*sizeof(struct sensores));
	if( novo == NULL )
	{
		printf("cona\n" );
	}


	return novo;
}



void add(int num1, int num2, struct sensores* sensor)
{
	sensor[num1].array[num2] = true;
	printf("%d\n", sensor[num1].array[num2]);

}


int main(void)
{

	struct sensores* sensor  = sensores_construtor();
	add(0, 2, sensor);
	add(0, 3, sensor);
	free(sensor);


	return 0;
}