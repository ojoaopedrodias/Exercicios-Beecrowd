#include <stdio.h>
 
int main() {
	
	int X, Y;
	double total;
	
	scanf("%d", &X);
	scanf("%d", &Y);
	
	if (X == 1){
		total = Y * 4.00;
		printf("Total: R$ %.2lf\n", total);
	}
	if (X == 2){
		total = Y * 4.50;
		printf("Total: R$ %.2lf\n", total);
	}
	if (X == 3){
		total = Y * 5.00;
		printf("Total: R$ %.2lf\n", total);
	}
	if (X == 4){
		total = Y * 2.00;
		printf("Total: R$ %.2lf\n", total);
	}
	if (X == 5){
		total = Y * 1.50;
		printf("Total: R$ %.2lf\n", total);
	}
	
    return 0;
}
