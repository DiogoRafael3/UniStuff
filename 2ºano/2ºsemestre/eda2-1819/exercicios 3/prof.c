#include <stdio.h>
#include <string.h>

struct equipa{
	char nome[21];
	int golosmarcados;
	int golossofridos;
	int vitoria;
	int empate;
	int derrota;
	int pontos;
};

int calcPoints(int number1, int number2){//função simples para calcular os pontos do resultado
	if (number1>number2)
		return 3;

	else if (number2>number1)
		return 0;

	else
		return 1;
}

void score(int size, int current, struct equipa array[size],int number1, int number2){//função para somar às vitorias/derrotas/empates
	if(number2>number1)
		array[current].derrota++;
	
	else if(number2<number1)
		array[current].vitoria++;
	
	else if(number2==number1)
		array[current].empate++;
}

int findMax(int size, struct equipa array[size]){//função para encontrar o vencedor do torneio
	int min, max;
	int tag;
	min= max= 0;
	
	for(int i=0; i<size; i++){
		if(array[i].pontos > max){
			min=max;
			max=array[i].pontos;
			tag=i;
		}

		else if (array[i].pontos > min){
			min=array[i].pontos;
		}
	}

	if(min==max)
		return -1;

	return tag;

}

int main(void){
	int n, j;//numero de equipas e numero de jogos
	
	scanf("%d %d", &n, &j);

	struct equipa array[n];

	//inicialização das structs num array
	for(int i=0; i<n; i++){
		scanf("%s", array[i].nome);
		array[i].pontos=array[i].golosmarcados=array[i].golossofridos=array[i].vitoria=array[i].empate=array[i].derrota=0;
	}


	for(int k=0; k<j; k++){
		//criação de duas strings temporarias para comparação com os nomes no array de structs e dois inteiros temporarios correspondentes aos golos marcados e sofridos
		char comparefirst[21];
		char comparesecond[21];
		int tempgolosm, tempgoloss;
		scanf("%s %d - %s %d", comparefirst, &tempgolosm, comparesecond, &tempgoloss);
		for(int b=0; b<n; b++){
			//determinação de vencedores/atribuição de pontos/incrementos nos golos sofridos e marcados
			if(strcmp(array[b].nome,comparefirst)==0){//do primeiro nome na string
				array[b].golosmarcados=array[b].golosmarcados+tempgolosm;
				array[b].golossofridos=array[b].golossofridos+tempgoloss;
				array[b].pontos=array[b].pontos+calcPoints(tempgolosm,tempgoloss);
				score(n, b, array, tempgolosm, tempgoloss);
			}

			else if (strcmp(array[b].nome,comparesecond)==0){//do segundo nome na string
				array[b].golosmarcados=array[b].golosmarcados+tempgoloss;
				array[b].golossofridos=array[b].golossofridos+tempgolosm;
				array[b].pontos=array[b].pontos+calcPoints(tempgoloss,tempgolosm);
				score(n, b, array, tempgoloss, tempgolosm);
			}
		}
	}

	int number= findMax(n, array);

	if (number!=-1){
		printf("a vencedora foi %s, com %d ponto(s)\n", array[number].nome, array[number].pontos);
		printf("ganhou %d jogo(s), empatou %d jogo(s) e perdeu %d jogo(s)\n", array[number].vitoria, array[number].empate, array[number].derrota);
		printf("marcou %d golo(s) e sofreu %d golo(s)\n", array[number].golosmarcados, array[number].golossofridos);
	}

	else
		printf("torneio sem vencedora\n");
	 
}