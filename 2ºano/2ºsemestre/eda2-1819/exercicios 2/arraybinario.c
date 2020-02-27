#include <stdio.h>

#define POSICOES 50000

int intervalo(int min, int max, int v[max], int n){
	
	int media=(min+max)/2;
	
	if(n<v[media] && media!=max)
		return intervalo(min, media, v, n);

	else if(n>v[media] && media!=min)
		return intervalo(media, max, v, n);
	
	else if(n==v[media])
		return media;
	
	return -1;
}

int procura(int target, int size, int v[size]){
	return intervalo(0, size-1,v,target);
}

int main(void){
	
	int a[POSICOES];
	
	for(int i=0; i<POSICOES; i++)
		a[i]=(i+1)*2;

	for (int i = 1; i < POSICOES; ++i)
  	{
    	int p = procura(2 * i, POSICOES, a);

    	if (p == -1)
      		printf("Não encontrou %d\n", 2 * i);
    	else if(a[p] != 2 * i)
      		printf("Encontrou %d na posição errada: %d\n", 2* i, p);
  	}

  	printf("%d, %d, %d\n", procura(3, POSICOES, a), procura(0, POSICOES, a), procura(100002, POSICOES, a));

	return 0;
}