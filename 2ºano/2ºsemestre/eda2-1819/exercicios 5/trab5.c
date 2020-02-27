#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//#define NDEBUG 1
#include <assert.h>

#define size 142867//numero primo mais proximo de 100000/0.7(carga ideal para uma hashtable)
#define minorprime 13
#define defaultr 0

struct item{
	short p1;
	short p2;
	short p3;
	short interface;
	int key;
};

struct item *item_new(short a,short b, short c, short inter){
	struct item *item=malloc(sizeof(struct item));
	item->p1=a;
	item->p2=b;
	item->p3=c;
	item->interface=inter;
	item->key=a+b+c;//neste caso a minha chave será a soma das três partes do ip

	return item;

}

struct item **array_new(){
	struct item **itemarray=malloc(size*sizeof(struct item*));
	for(int i=0;i<size;i++){
		itemarray[i]=NULL;
	}
	return itemarray;
}

/*bool compare(struct item **array,int hash,short p1, short p2, short p3){

	if(array[hash]!=NULL && array[hash]->p1==p1 && array[hash]->p2==p2 && array[hash]->p3==p3)
		return true;
	compare(array,hash,p1,p2,p3)==true
	return false;
}*/

int hashCode(int key){
	return key % size;
}

int doubleHash(int key){
	return key % minorprime;
}

void hashInsert(struct item **array, struct item *item){
	int hash=hashCode(item->key);

	int d=1;
	while(array[hash]!=NULL){

		hash=(hash+ d*doubleHash(hash))%size;
		d++;
		//assert(hash>0);
	}

	array[hash]=item;
}

short hashFind(struct item **array,short p1, short p2, short p3){
	int hash=hashCode(p1+p2+p3);

	int d=1;
	while(array[hash]!=NULL){

		if(array[hash]!=NULL && array[hash]->p1==p1 && array[hash]->p2==p2 && array[hash]->p3==p3)
			return array[hash]->interface;

		hash=(hash+ d*doubleHash(hash))%size;
		d++;
	}

	return -1;
}


int main(void){
	int nlines;
	short p1,p2,p3,inter;

	scanf("%d",&nlines);

	struct item **hashtable=array_new();

	for(int i=0; i<nlines;i++){

		scanf("%hi.%hi.%hi.0 %hi",&p1,&p2,&p3,&inter);

		hashInsert(hashtable,item_new(p1,p2,p3,inter));
	}

	while(scanf("%hi.%hi.%hi.%*d",&p1,&p2,&p3)!=EOF){


		if(hashFind(hashtable,p1,p2,p3)!=-1)
			printf("%d\n",hashFind(hashtable,p1,p2,p3));

		else if(hashFind(hashtable,p1,p2,p3)==-1 && hashFind(hashtable,defaultr,defaultr,defaultr)==-1)
			printf("no route\n");

		else if(hashFind(hashtable,p1,p2,p3)==-1 && hashFind(hashtable,defaultr,defaultr,defaultr)!=-1)
			printf("%d\n",hashFind(hashtable,defaultr,defaultr,defaultr));

	}

	free(hashtable);
	return 0;

}
