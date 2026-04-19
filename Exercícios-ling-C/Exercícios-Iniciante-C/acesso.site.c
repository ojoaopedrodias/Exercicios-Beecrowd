#include <stdio.h>
 
int main() {
 
    int t, r;
    
    scanf("%d", &t);
    
    while ((t >= 1) && (t <= 1000)){
    	r = 4 * t;
    	printf("%d", r);
    	break;
	}
    
    return 0;
}
