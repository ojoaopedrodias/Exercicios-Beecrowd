#include <stdio.h>
 
int main() {
	
	double A, B, C, temp;
	double perim;
	
	scanf("%lf", &A);
	scanf("%lf", &B);
	scanf("%lf", &C);
	
	if (A < B){
		temp = A;
		A = B;
		B = temp;
	}
	if (A < C){
		temp = A;
		A = C;
		C = temp;
	}
	if (B < C){
		temp = B;
		B = C;
		C =temp;
	}
	
	if (A < (B+C)){
		perim = A + B + C;
		printf("Perimetro = %.1lf\n", perim);
	}
	else{
		perim = ((A+B) * C) / 2;
		printf("Area = %.1lf\n", perim);
	}
	
	
    return 0;
}