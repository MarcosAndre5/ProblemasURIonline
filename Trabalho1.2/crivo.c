#include <stdio.h>
#include <string.h>

#define TAM 60102
char testaPrimos[TAM];
int primos[TAM / 5];
int contPrimos;

void crivo(){
    int i, j;
    contPrimos = 0;

    memset(testaPrimos, 1, sizeof(testaPrimos));
    testaPrimos[0] = 0;
    testaPrimos[1] = 0;

    for(i = 2; i < TAM; i++){
        if(testaPrimos[i] == 1){
            primos[contPrimos++] = i;
            for(j = i + i; j < TAM; j += i){
                testaPrimos[j] = 0;
            }
        }
    }
}

int main(){
    int i, peso;

    crivo();
    scanf("%d", &peso);
    for(i = 0; i < contPrimos; i++){
        if(primos[i] >= peso){
            printf("%d ", primos[i]);
        }
    }
    printf("\n");
}