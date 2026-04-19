#include <stdio.h>
#include<math.h>
int main() {
 
    double pi = 3.14159;
    double A, R;
    
    scanf("%lf", &R);
    R = round(R * 100)/100;
    A = pi * (R * R);
    printf("A=%.4lf\n", A);
 
    return 0;
}
