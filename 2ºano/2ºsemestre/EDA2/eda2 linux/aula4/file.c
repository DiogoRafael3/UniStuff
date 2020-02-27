#include <stdio.h>
#define MAX 10


FILE* abrir(char ficheiro[])
{
	FILE* file = fopen(ficheiro, "r+");
	int zero = 0;
	if(file == NULL)
	{
		
		file = fopen(ficheiro, "w+");
		
		for(int i = 1; i <= MAX; i++)
		{
			fwrite(&zero, sizeof(zero), 1, file);
		}
	}

	return file;
}

void le(FILE* file, int posicao, int* x)
{

	fseek(file, (posicao - 1)*sizeof(int), SEEK_SET);
	fread(x, sizeof(int),1, file );

}

void escreve(FILE* file, int posicao, int valor)
{
	fseek(file, (posicao - 1)*sizeof(int), SEEK_SET);
	fwrite(&valor, sizeof(int), 1, file);
}

int main(void)
{
	int n = 0;
	int k = 0;
	FILE* file = abrir("ficheiro");
	while(scanf("%c", &input) != 'q')
	{
		switch(input)
		{
			case '?':
				scanf("%d", &n);
				le(file, n, &x);
				printf("%d\n", x);
				break;

			case '+':
				scanf("%d %d", &n, &k);
				escreve(file, n, k);

			case 'r':
				scanf("%d", &n);
				escreve(file, n, 0);
		}	
	}


	return 0;
}