#include <stdio.h>
#include <string.h>
#define TAM 1000000
char testaPrimos[TAM];
int i,j;
void crivo(){
	memset(testaPrimos,1,sizeof(testaPrimos));
	testaPrimos[0]=0;
	testaPrimos[1]=0;
	for(i=2;i<TAM;i++)
		if(testaPrimos[i]==1)
			for(j=i+i;j<TAM;j+=i)
				testaPrimos[j]=0;
}
int main(){
	int Q,X,Y,contador;
	char gemios[TAM];
	scanf("%d",&Q);
	crivo();
	memset(gemios,0,sizeof(gemios));
	for(j=2;j<=TAM;j++)
		if(testaPrimos[j]==1&&(testaPrimos[j-2]==1||testaPrimos[j+2]==1))
			gemios[j]=1;
	for(i=0;i<Q;i++){
		contador=0;
		scanf("%d %d",&X,&Y);
		if(X<Y)
			for(j=X;j<=Y;j++)
				contador+=gemios[j];
		else
			for(j=Y;j<=X;j++)
				contador+=gemios[j];
		printf("%d\n",contador);
	}
	return 0;
}