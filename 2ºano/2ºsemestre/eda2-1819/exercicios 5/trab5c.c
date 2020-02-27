#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "hashterface.h"

#define defaultr 0//apenas para evitar usar 0s para encontrar o ip default


int main(void){
	int nlines;//no. de linhas
	short p1,p2,p3,inter;//propriedades do elemento(primeira parte do ip, segunda, terceira e interface)

	scanf("%d",&nlines);

	struct item **hashtable=array_new();//inicializacao da hashtable

	for(int i=0; i<nlines;i++){//pedido das interfaces

		scanf("%hi.%hi.%hi.0 %hi",&p1,&p2,&p3,&inter);

		hashInsert(hashtable,item_new(p1,p2,p3,inter));
	}
	
	short findzero=hashFind(hashtable,defaultr,defaultr,defaultr);//encontrar o route para 0.0.0.0 caso esteja lá

	while(scanf("%hi.%hi.%hi.%*d",&p1,&p2,&p3)!=EOF){//procura dos ips na hashtable que contem os routes
		short find=hashFind(hashtable,p1,p2,p3);

		if(find!=-1)
			printf("%hi\n",find);

		else if(find==-1 && findzero==-1)//caso nao seja encontrado e nao haja default route
			printf("no route\n");

		else if(find==-1 && findzero!=-1)//caso seja encontrado e haja default route
			printf("%hi\n",findzero);

	}

	free(hashtable);//dar free da hashtable depois da utilizacao
	return 0;

}