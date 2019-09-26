#include <stdio.h>

int main(){
	int i, N, notas[100000], notaMaior = 0;

	scanf("%d", &N);

	for(i = 0; i < N; i++)
		scanf("%d", &notas[i]);
	for(i = 0; i < N; i++)
		if(notas[0] < notas[i])
			notaMaior++;
	if(notaMaior > 0)
		printf("N\n");
	else
		printf("S\n");
	return 0;
}