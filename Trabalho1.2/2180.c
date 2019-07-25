#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define TAM 60101

int main(){
	unsigned int peso, i, j, contador = 0, soma = 0, horas;
	unsigned int primos[TAM];
	float raiz;
	scanf("%d", &peso);
	raiz = sqrt(peso);
	for(i = 2; i <= TAM; i++){
		primos[i] = i;
	}
	primos[0] = 0;
	primos[1] = 0;
	for(i = 2; i <= raiz; i++){
		if(primos[i] == i){
			for (j = i + i; j <= TAM; j += i){
				primos[j] = 0;
			}
		}
	}
	for(i = 2; i <= TAM; i++){
		if(primos[i] != 0 && primos[i] >= peso && contador < 10){
			soma += primos[i];
			contador++;
		}
	}
	printf("%d km/h\n", soma);
	horas = 60000000/soma;
	printf("%d h / %d d", horas, horas/24);
	printf("\n");
	return 0;
}