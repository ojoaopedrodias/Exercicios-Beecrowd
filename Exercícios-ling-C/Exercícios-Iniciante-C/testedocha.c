#include <stdio.h>
 
int main() {
    
   int T, A, B, C, D, E, n;
   
    n = 0;
    
    scanf("%d", &T);
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);
    scanf("%d", &E);
    
    if (A == T){
        n = n + 1;
	}
	if (B == T){
        n = n + 1;
	}
	if (C == T){
        n = n + 1;
	}
	if (D == T){
        n = n + 1;
	}
	if (E == T){
        n = n + 1;
	}
	
	printf("%d %d %d %d %d", A, B, C, D, E);
	printf("\n%d", n);
    return 0;
}
