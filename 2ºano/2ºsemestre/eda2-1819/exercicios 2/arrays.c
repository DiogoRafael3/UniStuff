#include <stdio.h>

#define POSICOES 50000

int procura(int n, int s, int v[s]){
	/*if(n>s || n<v[0]){
		printf("%s\n", "Não encontrado");
		return -1;
	}*/

	for(int i=0; i<s; i++){
		if(n==v[i])
			return i;
	}
	return -1;

}

int main(void){
	int a[POSICOES];
	for(int i=0; i<POSICOES; i++)
		a[i]=(i+1)*2;

	for (int i = 1; i <= POSICOES; ++i)
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