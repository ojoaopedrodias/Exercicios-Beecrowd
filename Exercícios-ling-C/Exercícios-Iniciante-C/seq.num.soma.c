#include <stdio.h>
 
int main() {
	
	int M, N, temp, soma;
	soma = 0;
	M = 1;
	N = 1;
	
	//scanf("%d", &M);
	//scanf("%d", &N);
	
	while (M > 0 && N > 0){
		scanf("%d", &M);
		scanf("%d", &N);
		
		if (M < N){
			M = temp;
			M = N;
			N = temp;
		}
		
		while (M >= N){
			soma = soma + M;
			M--;
			printf("%d ", M + 1);
		}
		printf("Soma: %d\n", soma);
		soma = 0;
	}
	
	
    return 0;
}
