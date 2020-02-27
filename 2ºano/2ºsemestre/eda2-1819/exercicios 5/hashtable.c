#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "hashterface.h"

#define size 999983//numero primo mais proximo de um milhao para evitar colisoes
#define minorprime 142867//numero primo equivalente ao numero maximo de elementos possiveis na hash*0.7 que é a carga ideal


struct item *item_new(short a,short b, short c, short inter){//construtor para cada elemento
	struct item *item=malloc(sizeof(struct item));
	item->p1=a;
	item->p2=b;
	item->p3=c;
	item->interface=inter;
	item->key=a+b+c;//neste caso a minha chave sera a soma de todos os elementos do ip

	return item;

}

struct item **array_new(){//construtor para a hashtable
	struct item **itemarray=malloc(size*sizeof(struct item*));
	
	for(int i=0;i<size;i++)
		itemarray[i]=NULL;

	return itemarray;
}

int hashCode(int key){//hashcode inicial
	return key % size;
}

int doubleHash(int key){//double hashing
	return key % minorprime;
}

void hashInsert(struct item **array, struct item *item){//insercao de elementos na hashcode
	int key=item->key;
	int hash=hashCode(key);

	int d = 1;

	while(array[hash]!=NULL){//o algoritmo que utilizei foi hashcode atual+ no. de ocorrecias* double hash
		hash=hash + d * doubleHash(hash);
		
		if (hash > size)
			hash = hash % size;

		d++;
	}

	array[hash]=item;
}

short hashFind(struct item **array,short p1, short p2, short p3){//funcao para encontrar elementos na hashtable
	int key=p1+p2+p3;
	int hash=hashCode(key);

	int d = 1;
	while(array[hash]!=NULL){
		if(array[hash]->p1==p1 && array[hash]->p2==p2 && array[hash]->p3==p3)//se p1,p2 e p3 forem equivalentes ao do atual elemento 
			return array[hash]->interface;

		hash=hash + d * doubleHash(hash);

		if (hash > size)
			hash = hash % size;

		d++;
	}

	return -1;//senao e retornado o numero -1
}
