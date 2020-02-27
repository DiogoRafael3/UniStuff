#include <stdio.h>

#define TAMANHO 100000

struct hashtable
{
	int route1;
	int route2;
	int route3;
	int hash;

}

struct hashtable* hashconstruct()
{
	struct hashtable* table = malloc(sizeof(struct hashtable));
	return table;
};

int hash(int chave)
{
	return chave % TAMANHO;
}


int main(void)
{
	return 0;
}