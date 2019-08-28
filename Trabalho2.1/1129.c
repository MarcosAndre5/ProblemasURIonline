#include <stdio.h>

#define TAM 5

int main(){
	int i, j, N = 1, contador;
	int opcoes[TAM];

	while(N != 0){
		scanf("%d", &N);
		
		for(i = 0; i < N; i++){
			scanf("%d %d %d %d %d", &opcoes[0], &opcoes[1], &opcoes[2], &opcoes[3], &opcoes[4]);
			
			contador = 0;
			for(j = 0;j < TAM; j++){
				if(opcoes[j] <= 127){
					contador++;
				}
			}
			if(contador == 1){
				for(j = 0; j < TAM; j++){
					if(opcoes[j] <= 127){
						switch(j){
							case 0:
								printf("A\n");
								break;
							case 1:
								printf("B\n");
								break;
							case 2:
								printf("C\n");
								break;
							case 3:
								printf("D\n");
								break;
							case 4:
								printf("E\n");
								break;
						}
					}
				}
			}else{
				printf("*\n");
			}
		}
	}
	return 0;
}