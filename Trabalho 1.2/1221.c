#include <stdio.h>
#include <math.h>

int main(){
	int i, N, teste, contador = 0;
	long X;
	scanf("%d", &N);
	while(contador < N){
		teste = 0;
		scanf("%ld", &X);
		if(X == 2){
			printf("Prime\n");
			contador++;
			continue;
		}
		for(i = 2; i < sqrt(X) + 1; i++){
			if(X % i == 0){
				teste++;
			}
			if(teste == 2){
				break;
			}
		}
		if(teste >= 1){
			printf("Not Prime\n");
		}else{
			printf("Prime\n");
		}
		contador++;
	}
	return 0;
}