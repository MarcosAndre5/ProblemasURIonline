#include <stdio.h>

int main(){
	char texto[1000];

	while(scanf("%s", texto) != EOF){
		printf("%s\n", texto);
	}

	return 0;
}