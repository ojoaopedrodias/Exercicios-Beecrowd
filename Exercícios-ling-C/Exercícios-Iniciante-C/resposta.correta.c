#include <stdio.h>
 
int main() {
	
	int N, i, x;
	i = 1;
	
	scanf("%d", &N);
	
	while (i <= N){
		scanf("%d", &x);
		printf("resposta %d: %d\n", i, x);
		i++;
	}
	
    return 0;
}
