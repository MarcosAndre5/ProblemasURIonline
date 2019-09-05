#include <stdio.h>
#include <string.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main(){
    int N;

    while(scanf("%d", &N) != EOF){
        int i, numero, botas[31][2], pares = 0;
        char pe;

        memset(botas, 0, sizeof(botas));

        for(i = 0; i < N; ++i){
            scanf("%d %c", &numero, &pe);
            ++botas[numero - 30][pe == 'E' ? 0 : 1];
        }
        for (i = 0; i < 31; ++i){
            pares += MIN(botas[i][0], botas[i][1]);
        }
        printf("%d\n", pares);
    }
    return 0;
}