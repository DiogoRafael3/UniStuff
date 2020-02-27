#include <stdio.h>
#include "list.h"

struct list
{
	int num;
	struct list *proximo;
};

struct list *list_constuct()
{
	struct list *name = malloc(sizeof(struct list));
	return name;
	
};

void adicionar(struct list *root, int new)
{
	struct list *temp = root;

	while( temp->proximo != NULL)
	{
		temp = temp->proximo;
	}

	struct list *novo = list_constuct();
	novo->nuum = new;

	temp->proximo = novo;
};



int main(void)
{
	struct list *lista = list_constuct(); 
	lista->num = 4;


	adicionar(lista, 5);
	return 0;

}