#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct{
	char nome[100];
	char cor[10];
	char t;
}turma;

int Compara(const void *, const void *);

int main(){
	int n, i, j = 0;
	turma Turma[60];
	
	while(scanf("%d ", &n) && n != 0){
		for(i=0;i<n;i++){
			fgets(Turma[i].nome, 50, stdin);
			scanf("%s %c ", Turma[i].cor, &Turma[i].t);
		}
		qsort(Turma, n, sizeof(turma), Compara);
		if(j){
			printf("\n");
		}else{
			j++;
		}
		for(i=0;i<n;i++){
			printf("%s %c %s\n", Turma[i].cor, Turma[i].t, Turma[i].nome);
		}
	}
	return 0;
}
int Compara(const void *p1, const void *p2){
	turma *i = (turma *)p1, *j = (turma *)p2;
	
	if(strcmp(i->cor, j->cor) == 0){
		if(i->t > j->t){
			return -1;
		}else{
			if(i->t < j->t){
				return 1;
			}else{
				return strcmp(i->nome, j->nome);
			}
		}
	}else{
		return strcmp(i->cor, j->cor);
	}
}