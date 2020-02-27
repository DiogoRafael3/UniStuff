#include <stdlib.h>

struct no
{
	int nuum;
	struct *no proximo;
};

struct *no no_constuct()
{
	struct *no name = mallock(sizeof(struck no));
	return name;
	
};

int adicionar(struct *no root, int new)
{
	struct *no temp = root;

	while( temp.proximo != NULL)
	{
		temp = temp.proximo;
	}

	struct *no novo = no_constuct;
	novo.nuum = new;

	temp.proximo = novo;
};



int main(void)
{
	struct *no lista = no_constuct(); 
	lista.nuum = 4;


	adicionar(lista, 5);
	printf("%d\n", lista->nuum);
	return 0;

}