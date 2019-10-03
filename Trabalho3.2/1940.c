#include <stdio.h>

int main(){
	int J, R, i, j, somaPontos, maiorPontuacao = 0, jogadorGanhador = 0;

	scanf("%d %d", &J, &R);

	int jogadas[J][R];

	i = 0;
	while(i < R){
		j = 0;
		while(j < J){
			scanf("%d", &jogadas[j][i]);
			j++;
		}
		i++;
	}

	for(i = 0; i < J; i++){
		somaPontos = 0;
		
		for(j = 0; j < R; j++)
			somaPontos += jogadas[i][j];
		
		if(somaPontos >= maiorPontuacao){
			maiorPontuacao = somaPontos;
			jogadorGanhador = i + 1;
		}
	}
	printf("%d\n", jogadorGanhador);
	return 0;
}