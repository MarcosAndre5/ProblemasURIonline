#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	char numeros[200];
}telefones;

telefones Telefones[100000];

int Comparacao(const void *p1, const void *p2){
	telefones *i = (telefones *)p1, *j = (telefones *)p2;
	return strcmp(i->numeros, j->numeros);
}

int main(){
	int N, i, j, contador;

	while(scanf("%d\n", &N) != EOF){
		for(i = 0; i < N; i++){
			scanf("%s", Telefones[i].numeros);
		}
		qsort(Telefones, N, sizeof(telefones), Comparacao);
		contador = 0;
		for(i = 0; i < N-1; i++){
			for(j = 0; j < strlen(Telefones[i].numeros); j++){
				if(Telefones[i].numeros[j] == Telefones[i+1].numeros[j]){
					contador++;
				}else{
					break;
				}
			}
		}
		printf("%d\n", contador);
	}
	return 0;
}