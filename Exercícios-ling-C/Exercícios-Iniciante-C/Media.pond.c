#include <stdio.h>
#include <math.h>
int main() {
 
    double A, B, MEDIA;
    
    scanf("%lf", &A);
    scanf("%lf", &B);
    A = round(A*10)/10;
    B = round(B*10)/10;
    
    MEDIA = ((A * 3.5) + (B * 7.5)) / 11;
    
    printf("MEDIA = %.5lf\n", MEDIA);
 
    return 0;
}
