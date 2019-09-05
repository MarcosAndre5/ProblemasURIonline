#include <stdio.h>

void flush_in(){
	int ch;
	while((ch = fgetc(stdin)) != EOF && ch != '\n'){}
}

int main(){
	int numeroAmigos = 0;
	double distancia = 0, somaDistancia = 0, mediaDistancia = 0;
	char nome[50];

	while(fgets(nome, 50, stdin)){
		scanf("%lf", &distancia);
		flush_in();
		numeroAmigos++;
		somaDistancia += distancia;
	}
	mediaDistancia = somaDistancia / numeroAmigos;
	printf("%.1f\n", mediaDistancia);
	return 0;
}