#include <stdio.h>
 
int main() {
 
    double x;
    int i, pos;
    pos = 0;
    
    for (i = 1; i <= 6; i++) {
    	scanf("%lf", &x);
    	
    	if (x > 0){
    		pos++;
		}
	}
	
	printf("%d valores positivos\n", pos);
 
    return 0;
}