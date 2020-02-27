#include <stdio.h>




FILE* abrir(char ficheiro[])
{
	FILE* file = fopen(ficheiro, "r+");
	char id[9];
	if(fscanf(file, "%s", id) == NULL)
	{
		printf("puta\n");
	}

	
	

	return file;
}

int main(void)
{
	abrir("ficheiro");
	return 0;
}