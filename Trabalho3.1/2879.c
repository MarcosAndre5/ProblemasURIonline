#include <stdio.h>

int main(){
	int i, N, porta = 0, acertos = 0;

	scanf("%d", &N);
	for(i = 0; i < N; i++){
		scanf("%d", &porta);
		if(porta != 1)
			acertos++;
	}
	printf("%d\n", acertos);
	return 0;
}