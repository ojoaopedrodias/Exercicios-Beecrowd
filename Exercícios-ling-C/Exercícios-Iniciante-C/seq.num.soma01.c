#include <stdio.h>
 
int main() {
	
	int M, N, temp, sum;
	sum = 0;
	
	scanf("%d", &M);
	scanf("%d", &N);
	
	while (M > 0 && N > 0){
		
		if (M < N){
			temp = M;
			M = N;
			N = temp;
		}
		
		for (int i = N; i <= M; i++){
			sum = sum + i;
			printf("%d ", i);	
		}
		
		printf("Sum=%d\n", sum);
		
		scanf("%d", &M);
		scanf("%d", &N);
		sum = 0;
	}
	
	return 0;
}