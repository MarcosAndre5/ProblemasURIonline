#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int numero;
	int modulo;
	int impar;
}valores;

int Comparacao(const void *p1, const void *p2){
	valores *i = (valores *)p1, *j = (valores *)p2;

	if(i->modulo > j->modulo){
		return 1;
	}else{
		if(i->modulo < j->modulo){
			return -1;
		}else{
			if((i->impar == 1 && j->impar == 0) || (i->impar == 0 && j->impar == 1)){
				if(i->impar > j->impar){
					return -1;
				}else{
					return 1;
				}
			}else{
				if(i->impar == 1 && j->impar == 1){
					if(i->numero > j->numero){
						return -1;
					}else{
						return 1;
					}
				}else{
					if(i->numero > j->numero){
						return 1;
					}else{
						return -1;
					}
				}
			}
		}
	}
}

int main(){
	valores Valores[10000];
	int N, M, i;

	while(scanf("%d %d", &N, &M) && (N || M)){
		for(i = 0; i < N; i++){
			scanf("%d", &Valores[i].numero);
			Valores[i].modulo = Valores[i].numero % M;
			if(Valores[i].numero % 2 == 0){
				Valores[i].impar = 0;
			}else{
				Valores[i].impar = 1;
			}
		}
		qsort(Valores, N, sizeof(valores), Comparacao);
		printf("%d %d\n", N, M);
		for(i = 0; i < N; i++){
			printf("%d\n", Valores[i].numero);
		}
	}
	printf("0 0\n");
	return 0;
}