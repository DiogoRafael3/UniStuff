#include <stdio.h>
#include <string.h>

int main(void)
{
	int equipas;
	int jogos;
	scanf("%d %d", &equipas, &jogos);


	char teams[equipas][21];
	char equipa[21];
	int pontos[equipas];
	int golos_marcados[equipas];
	int golos_sofridos[equipas];
	int vitorias[equipas];
	int derrotas[equipas];
	int empates[equipas];
	char equipa1[21];
	int jogo1;
	char equipa2[21];
	int jogo2;
	

	for(int i = 0; i < equipas; i++)
	{
		scanf("%s", equipa);
		strcpy(teams[i], equipa);
		pontos[i] = 0;
		golos_marcados[i] = 0;
		golos_sofridos[i] = 0;
		vitorias[i] = 0;
		derrotas[i] = 0;
		empates[i] = 0;		
	}

	
	for(int o = 0; o < jogos; o++)
	{
		scanf("%s %d - %s %d", equipa1, &jogo1, equipa2, &jogo2);
		if(jogo1 > jogo2)
		{
			for(int p = 0; p < equipas; p++)
			{
				if(strcmp(equipa1,teams[p]) == 0)
				{
					pontos[p] = pontos[p] + 3;
					vitorias[p] = vitorias[p] + 1;
					golos_marcados[p] = golos_marcados[p] + jogo1;
					golos_sofridos[p] = golos_sofridos[p] + jogo2;
					
				}

				if(strcmp(equipa2,teams[p]) == 0)
				{
					derrotas[p] = derrotas[p] + 1;
					golos_sofridos[p] = golos_sofridos[p] + jogo1;
					golos_marcados[p] = golos_marcados[p] + jogo2;
				}	
			}
		}

		else if(jogo2 > jogo1)
		{
			for(int h = 0; h < equipas; h++)
			{
				if(strcmp(equipa2,teams[h]) == 0)
				{
					pontos[h] = pontos[h] + 3;
					vitorias[h] = vitorias[h] + 1;
					golos_marcados[h] = golos_marcados[h] + jogo2;
					golos_sofridos[h] = golos_sofridos[h] + jogo1;
				}

				if(strcmp(equipa1,teams[h]) == 0)
				{
					derrotas[h] = derrotas[h] + 1;
					golos_marcados[h] = golos_marcados[h] + jogo1;
					golos_sofridos[h] = golos_sofridos[h] + jogo2;
				}
			}
		}

		else
		{
			for(int n = 0; n < equipas; n++)
			{
				if(strcmp(equipa1, teams[n]) == 0)
				{	
					pontos[n] = pontos[n] + 1;
					empates[n] = empates[n] + 1;
					golos_marcados[n] = golos_marcados[n] + jogo1;
					golos_sofridos[n] = golos_sofridos[n] + jogo2;
				}

				else if(strcmp(equipa2,teams[n]) == 0)
				{	
					pontos[n] = pontos[n] + 1;
					empates[n] = empates[n] + 1;
					golos_marcados[n] = golos_marcados[n] + jogo1;
					golos_sofridos[n] = golos_sofridos[n] + jogo2;
				}
			}
		}

			
	}

	int vencedor = pontos[0];
	int ind_vencedor = 0;

	for(int y = 1; y < equipas; y++)
	{
		if(vencedor < pontos[y])
		{
			vencedor = pontos[y];
			ind_vencedor = y;
		}

	}
	
	int counter = 0;
	for(int f = 0; f < equipas; f++)
	{

		if(vencedor == pontos[f])
			counter++;

		if(counter > 1)
		{
			printf("torneio sem vencedora\n");
			break;
			
		}

	}	

	if(counter == 1)
	{
		printf("a vencedora foi %s, com %d ponto(s)\n", teams[ind_vencedor], pontos[ind_vencedor]);
		printf("ganhou %d jogo(s), empatou %d jogo(s) e perdeu %d jogo(s)\n", vitorias[ind_vencedor], empates[ind_vencedor], derrotas[ind_vencedor]);
		printf("marcou %d golo(s) e sofreu %d golo(s)\n", golos_marcados[ind_vencedor], golos_sofridos[ind_vencedor]);
	}

	
	return 0;
}