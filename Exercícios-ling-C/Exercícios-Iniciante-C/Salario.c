#include <stdio.h>
#include <math.h>

int main() {
 
    int a, b, d;
    double c, e;
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%lf", &c);
    c = round(c*100)/100;
    
    e = b * c;
    
    printf("NUMBER = %d\n", a);
    printf("SALARY = U$ %.2lf\n", e);
    
    return 0;
}
