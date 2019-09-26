#include <stdio.h>

int main(){
	int i, j, N, D, X, yes, no;

	while(1){
		scanf("%d %d", &N, &D);

		if(N == 0 || D == 0)
			break;
		yes = 0;
		for(i = 0; i < N; i++){
			no = 0;
			for(j = 0; j < D; j++){
				scanf("%d", &X);
				if(X == 0)
					no++;
			}
			if(no == 0)
				yes++;
		}
		if(yes > 0)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}