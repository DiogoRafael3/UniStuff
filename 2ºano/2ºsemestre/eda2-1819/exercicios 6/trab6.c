#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define size 457
#define minorprime 7
#define zero 0


/*int hashkey(int key){//hashkey inicial
	return key % size;
}

int doubleHash(int key){//double hashing
	return key % minorprime;
}

void pseudohashInsert(int *array, int sensor){
	int key=hashkey(sensor);
	int d=1;

	while(array[key]!=-1){
		key=key + d * doubleHash(key);
		
		if (key > size)
			key = key % size;

		d++;
	}

	array[key]=sensor;

}

bool pseudohashFind(int *array,int sensor){
	int key=hashkey(sensor);
	int d=1;

	while(array[key]!=-1){
		if(array[key]==sensor)
			return true;
		key=key + d * doubleHash(key);
		
		if (key > size)
			key = key % size;

		d++;
	}
	return false;
}

void pseudohashRemove(int *array, int sensor){
	int key=hashkey(sensor);
	int d=1;

	while(array[key]!=-1){
		if(array[key]==sensor)
			array[key]=-1;
		key=key + d * doubleHash(key);
		
		if (key > size)
			key = key % size;

		d++;
	}
}*/


int main(void){
	int nlines;
	char icase;
	int buffernumber1, buffernumber2;
	int numberofit, outputbuffer;
	bool flag=true;

	scanf("%d",&nlines);

	int *grid[nlines];

	int *pseudohashtable;


	for(int y=0 ; y<nlines ; y++){
		grid[y]=malloc(sizeof(int*));
		for(int z=0; z<size ; z++){
			grid[y][z]=-1;
		}
	}
	printf("%d\n"grid[0][2]);

	/*while(scanf("%c",&icase)!=EOF){
		switch(icase){
			case '+':
			scanf(" %d %d", &buffernumber1,&buffernumber2);
			hashInsert(grid[buffernumber2],buffernumber2);
			printf("%d\n", grid[buffernumber1]->caminho);

			case '-':
			scanf(" %d %d", &buffernumber1,&buffernumber2);
			hashRemove(grid[buffernumber1],buffernumber2);

			case '?':
			scanf(" %d %d", &numberofit,&buffernumber1);
			outputbuffer=buffernumber1;
			for(int i=0; i<numberofit; i++){
				scanf(" %d", &buffernumber2);
				printf("%d %d\n", buffernumber1,buffernumber2);
				if(flag)
					if (!hashFind(grid[buffernumber1], buffernumber2));
						flag = false;
				buffernumber1=buffernumber2;
			}
			if(flag==false)
				printf("no [%d..%d]\n", outputbuffer, buffernumber2);
			else
				printf("yes [%d..%d]\n", outputbuffer, buffernumber2);

		}
	}*/
}