#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 56
#define NUMS 10




struct node
{
	char id[NUMS];
	int telefone1;
	int telefone2;
	int rendimento;
	char orientacao[MAX];
	char habitos[MAX];
	struct node* proximo;
};

struct node* node_constructor()
{
	//struct node* novo = (struct node*) malloc(sizeof(struct node));
	struct node* novo =  malloc(sizeof(struct node));
	novo->telefone1 = 0;
	novo->telefone2 = 0;
	novo->rendimento = 0;
	return novo;
}

FILE* abrir(char ficheiro[], struct node** new)
{
	FILE* file = fopen(ficheiro, "r+");
	fseek(file, 0, SEEK_END);
	int size = ftell(file);

	char buffer[MAX];
	char id[NUMS];
	int numeros;
	if(size != 0)
	{
		while(fgets(buffer, sizeof(buffer), file) != NULL)
		{
			struct node* node1 = node_constructor();
			fgets(id, NUMS, file);
			node1->id = id;
			fgets(&numeros, NUMS, file);
			node1->telefone1 = numeros;
			fgets(&numeros, NUMS, file);
			node1->telefone2 = numeros;
			fgets(&numeros, NUMS, file);
			node1->rendimento = numeros;
			fgets(buffer, MAX, file);
			node1->orientacao = buffer;;
			fgets(buffer, MAX, file);
			node1->habitos = buffer;
			*new = node1->proximo;
	
		}
	}
	
	return file;
}

void add(struct node** new, char id[NUMS], int telefone1, int telefone2, int rendimento, char orientacao[MAX], char habitos[MAX])
{
	struct node* node1 = node_constructor();
	struct node* node2 = *new;
	node1->telefone1 = telefone1;
	node1->telefone2 = telefone2;
	node1->rendimento = rendimento;
	node1->proximo = NULL;
	for(int k = 0; id[k]!= '\0'; k++)
	{
		node1->id[k] = id[k];
	}
	for(int i = 0; orientacao[i]!= '\0'; i++)
	{
		node1->orientacao[i] = orientacao[i];
	}
	
	for(int o = 0; habitos[o]!= '\0'; o++)
	{
		node1->habitos[o] = habitos[o];
	}

	if(node2 == NULL)
		*new = node1;
	
	else if(node2->id[0] == '\0')
		*new = node1;

	else if(strcmp(node2->id, id) == 0)
	{
		
		*new = node1;

	}

	else
	{
		while(node2->proximo != NULL)
		{
			
			node2 = node2->proximo;
		}

		
		node2->proximo = node1;
	}

}


void remover(char id[NUMS], struct node** new)
{
	struct node* node1 = *new;
	
	if(strcmp(node1->id, id) == 0)
	{
		*new = node1->proximo;
		
	}

	else
	{
		while(node1->proximo != NULL)
		{
			if(strcmp((node1->proximo)->id, id) == 0)
			{
				node1->proximo = (node1->proximo)->proximo;
				break;
			}
			node1 = node1->proximo;
		}
	}

}

bool procura(char id[NUMS], struct node** new, struct node** temp)
{

	struct node* node1 = *new;
	
	if(node1 == NULL)
	{
		return false;
	}
	
	else if( node1->id[0] == '\0')
	{
		return false;
	}

	else
	{	
		while(node1->id[0] != '\0')
		{
			if(strcmp(node1->id, id) == 0)
			{
				*temp = node1;
				return true;
			}	
			node1 = node1->proximo;
		}
	}
	
	return false;
}



int main(void)
{
	
	struct node* new = node_constructor();
	struct node* temp = node_constructor();
	FILE* file = abrir("ficheiro.txt", &new);
	char id[10] = {'\0'};
	int telefone1;
	int telefone2;
	int rendimento;
	char orientacao[56] = {'\0'};
	char habitos[56] = {'\0'};
	char operacao;
	bool final;
	
	while(scanf("%c ", &operacao) != EOF)
	{
		switch(operacao)
		{
			case '+':
				scanf("%s\n", id);
				scanf("%d %d\n", &telefone1, &telefone2);
				scanf("%d\n", &rendimento);
				scanf("%[^\n]\n", orientacao);
				scanf("%[^\n]", habitos);
				add(&new, id, telefone1, telefone2, rendimento, orientacao, habitos);


				//printf("%d\n", new->telefone2);
				break;


			case '-':
			 	scanf("%s", id);
			 	remover(id, &new);
			 	//printf("%s\n", new->id);
			 	
			 	break;

			case '?':
			{
				scanf("%s", id);
			 	final = procura(id, &new, &temp);
			 	if(final == 1)
			 	{
			 		printf("+SUJEITO %s\n", temp->id);
			 		printf("%d %d\n", temp->telefone1, temp->telefone2);
			 		printf("%d\n", temp->rendimento);
			 		printf("%s\n", temp->orientacao);
			 		printf("%s\n", temp->habitos);
			 	}

			 	else
			 	{
			 		printf("+SUJEITO %s desconhecido\n", id);
			 	}

			 	break;
			}

			default:
				break;

		}
	}

	while(new != NULL)
	{
		fprintf(file, "%s\n", new->id);
		fprintf(file, "%d\n ", new->telefone1);
		fprintf(file, "%d\n", new->telefone2);
		fprintf(file, "%d\n", new->rendimento);
		fprintf(file, "%s\n", new->orientacao);
		fprintf(file, "%s\n", new->habitos);
		fprintf(file, "\n");
		new = new->proximo;

	}

	fclose(file);

	return 0;
}