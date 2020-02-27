#include <stdio.h>


int findMax(int size, int array[size]){
	int min, max;
	int tag;
	min= max= 0;
	for(int i=0; i<size; i++){
		if(array[i] > max){
			min=max;
			max=array[i];
			tag=i;
		}
		else if (array[i] > min && array[i]){
			min=array[i];
		}
		printf("min %d max %d\n", min, max);
	}

	if(min==max)
		return -1;

	return tag;

}

int main(void){
	int mark[5];
	for (int i=0; i<5; i++){
		mark[i]=i+1;
	}

	int i=findMax(4, mark);
	printf("%d\n", i);
}