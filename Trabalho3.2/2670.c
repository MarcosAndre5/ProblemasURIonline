#include <stdio.h>

int main(){
	int A1, A2, A3, andar[3], menor = 0;

	scanf("%d", &A1);
	scanf("%d", &A2);
	scanf("%d", &A3);

	andar[0] = A2 * 2 + A3 * 4;
	andar[1] = A1 * 2 + A3 * 2;
	andar[2] = A1 * 4 + A2 * 2;

	menor = andar[1];

	if(andar[0] < andar[1] && andar[0] < andar[2])
		menor = andar[0];
	else if(andar[2] < andar[0] && andar[2] < andar[1])
		menor = andar[2];

	printf("%d\n", menor);
	return 0;
}