#include <stdio.h>

int main(){
	int peso, velocidade=0, contador=0, i, divisiveis;
	scanf("%d", &peso);
	
	while (contador == 10){
		divisiveis = 0;
		
		for(i = 1; i <= peso + 1; i++){
			if (peso % i == 0){
				divisiveis++;
				break;
			}
		}
		if (divisiveis == 2){
			contador++;
			velocidade += peso;
			printf("um");
		}
		peso++;
	}
	printf("%d", velocidade);
}