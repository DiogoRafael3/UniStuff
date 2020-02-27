#include <stdio.h>


void jogofeijao(int begin, int end,int size,int pilhas[size]){
	int par=1;
	int alexbela[]={0, 0};

	for (int play = 0; play<size; play++)
	{
		if(play%2==0)
		{
			if(pilhas[end]>pilhas[begin])
			{
				alexbela[0]=alexbela[0]+pilhas[end];
				pilhas[end]=0;
				end--;
			}
			else if(pilhas[end]<pilhas[begin])
			{
				alexbela[0]=alexbela[0]+pilhas[begin];
				pilhas[begin]=0;
				begin++;
			}
		}
		if(play%2!=0)
			{
			if(pilhas[end]>=pilhas[begin] && par==0)
			{
				alexbela[1]=alexbela[1]+pilhas[end];
				pilhas[end]=0;
				end--;
				par=1;
			}

			else if(pilhas[end]>=pilhas[begin] && par==1)
			{
				alexbela[1]=alexbela[1]+pilhas[begin];
				pilhas[begin]=0;
				begin++;
				par=0;
			}

			else if(pilhas[end]<=pilhas[begin] && par==1)
			{
				alexbela[1]=alexbela[1]+pilhas[end];
				pilhas[end]=0;
				end--;	
				par=0;
			}

			else if(pilhas[end]<=pilhas[begin] && par==0)
			{
				alexbela[1]=alexbela[1]+pilhas[begin];	
				pilhas[begin]=0;
				begin++;
				par=1;
			}

		}
	}
	//play final
	//alexbela[1]=alexbela[1]+pilhas[begin];

	if(alexbela[0]>alexbela[1])
		printf("Alex ganha com %d contra %d\n", alexbela[0], alexbela[1]);
	else if(alexbela[0]<alexbela[1])
		printf("Bela ganha com %d contra %d\n", alexbela[1], alexbela[0]);
	else if(alexbela[0]==alexbela[1])
		printf("Alex e Bela empatam a %d\n", alexbela[0]);

}


int main(void){
	int n, x;

	scanf("%d", &n);
	
	int a[n];

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		a[i]= x;
	}

	jogofeijao(0, n-1,n, a);



}