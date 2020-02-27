#include <stdio.h>
#include "list.h"

struct node
{
	int num;
	struct node *proximo;
};

struct list
{
	struct node *head;
}

struct node *node_constuct()
{
	struct node *name = malloc(sizeof(struct list));
	return name;
	
};

void adicionar(struct node *root, int new)
{
	struct node *temp = root;

	while( temp->proximo != NULL)
	{
		temp = temp->proximo;
	}

	struct node *novo = list_constuct();
	novo->num = new;

	temp->proximo = novo;
};



int main(void)
{
	struct node *lista = node_constuct(); 
	lista->num = 4;


	adicionar(lista, 5);
	return 0;

}