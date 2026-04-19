#include <stdio.h>
#include <math.h>

int main() {
    
    double F1, F2, gdp;
    
    scanf("%lf", &F1);
    scanf("%lf", &F2);
    F1 = round(F1*100)/100;
    F2 = round(F2*100)/100;
    
	if (F1 >= -100.00 && F2 <= 100.00){
    	gdp = ((1 + F1) * (1 + F2)) - 1;
	}
	
    return 0;
}
