#include <stdio.h>
#include <math.h>
int main() {
	
	char name[20];
	double x, y, z, TOTAL;
	
	scanf("%s", &name);
	scanf("%lf", &x);
	scanf("%lf", &y);
	x = round(x*100)/100;
	y = round(y*100)/100;
	z = (y * 15) / 100;
	
	TOTAL = x + z;
	
	printf("TOTAL = %.2lf\n", TOTAL);
	
    return 0;
}
