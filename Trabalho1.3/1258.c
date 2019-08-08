#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
	char nome[100];
	char cor[10];
	char tamanho;
}turma;

int Comparacao(const void *p1, const void *p2){
	turma *i = (turma *)p1, *j = (turma *)p2;

	if(strcmp(i->cor, j->cor) == 0){
		if(i->tamanho > j->tamanho){
			return -1;
		}else{
			if(i->tamanho < j->tamanho){
				return 1;
			}else{
				return strcmp(i->nome, j->nome);
			}
		}
	}else{
		return strcmp(i->cor, j->cor);
	}
}

int main(){
	int n, i, j = 0;
	turma Turma[60];

	while(scanf("%d ", &n) && n != 0){
		for(i=0;i<n;i++){
			fgets(Turma[i].nome, 50, stdin);
			scanf("%s %c ", Turma[i].cor, &Turma[i].tamanho);
		}
		qsort(Turma, n, sizeof(turma), Comparacao);
		for(i=0;i<n;i++){
			printf("%s %c %s", Turma[i].cor, Turma[i].tamanho, Turma[i].nome);
		}
	}
	return 0;
}