#include <stdio.h>
#include <math.h> 
int main() {
	
    int x, y, a, b;
    double z, c, VALOR;
    
    scanf("%d %d %lf", &x, &y, &z);
    scanf("%d %d %lf", &a, &b, &c);
    z = round(z*100)/100;
    c = round(c*100)/100;
    
    VALOR = (y * z) + (b * c); 
    
    printf("VALOR A PAGAR: R$ %.2lf\n", VALOR);
    
    return 0;
}
