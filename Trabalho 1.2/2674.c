#include <stdio.h>
#include <string.h>

#define TAM 100000
char testaPrimos[TAM];

void crivo(){
    int i, j;
    memset(testaPrimos, 1, sizeof(testaPrimos));
    testaPrimos[0] = 0;
    testaPrimos[1] = 0;
    for(i = 2; i < TAM; i++){
        if(testaPrimos[i] == 1){
            for(j = i + i; j < TAM; j += i){
                testaPrimos[j] = 0;
            }
        }
    }
}

int main(){
	int N, i, existePrimo;
	char str[10];
	crivo();
	while(scanf("%d", &N) != EOF){
		int ok = 1;
		existePrimo = 0;
		sprintf(str, "%d", N);
        if(testaPrimos[N]){
        	for(i = 0; i < strlen(str); i++){
	            if(testaPrimos[str[i] - '0'] == 0){
		            ok = 0;
		            printf("Primo\n");
		         	break;
		        }
	        }
	        if(ok){
	        	printf("Super\n");
	        }
        }else{
        	printf("Nada\n");
        }
	}
	return 0;
}