#include <stdio.h>
 
int main() {
	
	double salario, taxa;
	scanf("%lf", &salario);
	
	if (salario <= 2000.00) {
		printf("Isento\n");
	}
	
	if (salario >= 2000.01 && salario <= 3000.00) {
		taxa = (salario - 2000) * 0.08;
		printf("R$ %.2lf\n", taxa);
	}
	
	if (salario >= 3000.01 && salario <= 4500.00) {
		taxa = ((salario - 3000) * 0.18) + 80;
		printf("R$ %.2lf\n", taxa);
	}
	
	if (salario > 4500.00) {
		taxa = ((salario - 4500) * 0.28) + 270 + 80;
		printf("R$ %.2lf\n", taxa);
	}
	
    return 0;
}