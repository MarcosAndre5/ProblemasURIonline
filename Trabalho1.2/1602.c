#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define TAM 2000001

bool primos[TAM];
unsigned divisores[TAM], qtdHiperPrimos[TAM];
void hiperPrimos();
void main(){
	unsigned numero;
	hiperPrimos();
	while (scanf("%u", &numero) != EOF){
		printf("%u\n", qtdHiperPrimos[numero]);
	}
}
void hiperPrimos(){
	unsigned i, j;
	unsigned numDivisores, tam;

	memset(primos, true, sizeof(primos));
	memset(divisores, 0, sizeof(divisores));

	for (i = 2; i < TAM; i++){
		if (primos[i]){
			divisores[i] = 2;
			for (j = i + i; j < TAM; j += i){
				primos[j] = false;
				numDivisores = 0;
				tam = j;
				while (tam % i == 0){
					tam /= i;
					numDivisores++;
				}
				if (divisores[j] == 0){
					divisores[j] = numDivisores + 1;
				}else{
					divisores[j] *= (numDivisores + 1);
				}
			}
		}
	}

	qtdHiperPrimos[1] = 0;
	
	for (i = 2; i <= TAM; i++){
		qtdHiperPrimos[i] = qtdHiperPrimos[i - 1];
		if (primos[divisores[i]]){
			qtdHiperPrimos[i]++;
		}
	}
}