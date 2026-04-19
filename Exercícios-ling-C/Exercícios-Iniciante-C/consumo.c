#include <stdio.h>
#include <math.h>
int main() {
	
	int x;
	double y, consumo;
	
	scanf("%d", &x);
	scanf("%lf", &y);
	y = round(y*10)/10;
	
	consumo = x / y;
	
	printf("%.3lf km/l\n", consumo);
	
    return 0;
}
