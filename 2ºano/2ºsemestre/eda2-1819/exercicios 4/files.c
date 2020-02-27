#include <stdio.h>

#define NINTS 10
#define NAME 20
#define SET 0

FILE *openfile(char nome[]){
	FILE *file=fopen(nome,"r+");
	int zero=0;
	
	if(file==NULL){
		file=fopen(nome,"w+");
		for(int i=0; i<NINTS ; i++){
			fwrite(&zero , sizeof(int) , 1 , file);
		}
	}
	return file;
}

void readfile(FILE *file, int pos, int *x){
	fseek(file , (pos-1)*sizeof(int) , SEEK_SET);
	fread(x , sizeof(int), 1 , file);
}

void writefile(FILE *file, int pos, int value){
	fseek(file , (pos-1)*sizeof(int) , SEEK_SET);
	fwrite(&value , sizeof(int) , 1 , file);
}


int main(void){
	char nome[NAME];
	char input;
	int boolean=1;
	scanf("%s",nome);
	FILE *file=openfile(nome);
	while(boolean=1){
		int buffersearch, bufferadd, show;
		scanf(" %c", &input);
		switch(input){
			
			case '?':
			scanf("%d", &buffersearch);
			readfile(file, buffersearch, &show);
			printf("%d\n", show);

			case '+':
			scanf("%d %d", &buffersearch, &bufferadd);
			writefile(file, buffersearch, bufferadd);

			case 'r':
			scanf("%d",&buffersearch);
			writefile(file,buffersearch,SET);

			case 'q':
			boolean=0;
		}
	}
	fclose(file);

}