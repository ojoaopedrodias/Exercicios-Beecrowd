#include <stdio.h>
 
int main() {
	
	int x, y, z;
    double spent;
    
    scanf("%d", &x);
    scanf("%d", &y);
    z = x * y;
    spent = z / 12.0;
    
    printf("%.3lf\n", spent);
    return 0;
}
