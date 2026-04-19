#include <stdio.h>
#include <math.h>

int main() {
	
	double pi = 3.14159;
	double A, B, C;
	double TRIRET, CIRCUNF, TRAPEZ, QUADRADO, RETANG;
	
	scanf("%lf", &A);
	scanf("%lf", &B);
	scanf("%lf", &C);
	A = round(A*100)/100;
	B = round(B*100)/100;
	C = round(C*100)/100;
	
	TRIRET = (A * C)/2.0;
	CIRCUNF = pi*(C*C);
	TRAPEZ = ((A + B) * C)/2.0;
	QUADRADO = B * B;
	RETANG = A * B;
	
	printf("TRIANGULO: %.3lf\n", TRIRET);
	printf("CIRCULO: %.3lf\n", CIRCUNF);
	printf("TRAPEZIO: %.3lf\n", TRAPEZ);
	printf("QUADRADO: %.3lf\n", QUADRADO);
	printf("RETANGULO: %.3lf\n", RETANG);
	
    return 0;
}
