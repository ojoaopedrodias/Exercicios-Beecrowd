#include <stdio.h>
 
int main() {
 
    int N, M, O;
    
    scanf("%d", &N);
    scanf("%d", &M);
    
    if ((N >= 1) && (N <= 40)){
    	if ((M >= 1) && (M <= 40)){
    		O = N - M;
    		printf("%d\n", O);
		}
	}
 
    return 0;
}
