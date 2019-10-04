#include <stdio.h>
#include <string.h>

int main(){
	int i, j = 0, qtdVogais;
	char risada[51], vogais[51];

	scanf("%s", risada);

	for(i = 0; risada[i]; i++)
		if(risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' || risada[i] == 'o' || risada[i] == 'u'){
			vogais[j] = risada[i];
			j++;
		}

	vogais[j] = '\0';

	qtdVogais = strlen(vogais);

	for(i = 0, j = qtdVogais - 1; i < qtdVogais; i++, j--)
		if(vogais[i] != vogais[j]){
			printf("N\n");
			return 0;
		}

	printf("S\n");
	return 0;
}