#include <stdio.h>

int main(){
	int i, j, N, ultrapassagens = 0, aux = 0, largada[24], chegada[24], compara[24];
	
	while(scanf("%d", &N) != EOF){
		i = 0;
		while(i < N){
			scanf("%d", &largada[i]);
			i++;
		}
		i = 0;
		while(i < N){
			scanf("%d", &chegada[i]);
			i++;
		}
		for(i = 0; i < N; i++)
			for(j = 0; j < N; j++)
				if(largada[i] == chegada[j])
					compara[j] = i + 25;

		for(i = 0; i < N; i++)
			for(j = i + 1; j < N; j++)
				if(compara[i] > compara[j]){
					aux = compara[j];
					compara[j] = compara[i];
					compara[i] = aux;
					ultrapassagens++;
				}

		printf("%d\n", ultrapassagens);
		ultrapassagens = 0;
	}
}