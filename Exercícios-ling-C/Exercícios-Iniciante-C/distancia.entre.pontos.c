#include <stdio.h>
#include <math.h>
int main() {
	
	double x1, y1;
	double x2, y2;
	double v1, v2, v3, distancia;
	
	scanf("%lf", &x1);
	scanf("%lf", &y1);
	scanf("%lf", &x2);
	scanf("%lf", &y2);
	x1 = round(x1*10)/10;
	y1 = round(y1*10)/10;
	x2 = round(x2*10)/10;
	y2 = round(y2*10)/10;
	
	v1 = (x2 - x1) * (x2 - x1);
	v2 = (y2 - y1) * (y2 - y1);
	v3 = v1 + v2;
	distancia = sqrt(v3);
	
	printf("%.4lf\n", distancia);
	
    return 0;
}
