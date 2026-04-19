#include <stdio.h>
#include <math.h>
int main(){
	
	double pi = 3.14159;
	double R, VOLUME;
	
	scanf("%lf", &R);
	R = round(R*100)/100;
	
	VOLUME = (4.0/3) * pi * (R*R*R);
	
	printf("VOLUME = %.3lf\n", VOLUME);
	
	return 0;
}
