#include <stdio.h>
#include <string.h>

int main(){
	int i, j, tamanhoMensagem = 0, tamanhoCrib = 0, contador = 0, linhasCorretas = 0;
	char mensagem[10002], crib[10002];

	scanf("%s", mensagem);
	scanf("%s", crib);

	tamanhoMensagem = strlen(mensagem);
	tamanhoCrib = strlen(crib);

	for(i = 0; i < (tamanhoMensagem - tamanhoCrib) + 1; i++){
		contador = 0;
		for(j = 0; j < tamanhoCrib; j++)
			if(mensagem[j + i] == crib[j])
				contador++;
		if(contador == 0)
			linhasCorretas++;
	}
	printf("%d\n", linhasCorretas);
	return 0;
}