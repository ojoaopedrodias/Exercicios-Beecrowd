#include <stdio.h>
#include <math.h>
int main() {
	
	double n1, n2, n3, n4, n5;
	double media;
	
	scanf("%lf", &n1);
	scanf("%lf", &n2);
	scanf("%lf", &n3);
	scanf("%lf", &n4);
	n1 = round(n1*10)/10;
	n2 = round(n2*10)/10;
	n3 = round(n3*10)/10;
	n4 = round(n4*10)/10;
	
	media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / 10;
	printf("Media: %.1lf\n", media);
	
	if (media >= 7.0){
		printf("Aluno aprovado.\n");
	}
	if (media < 5.0){
		printf("Aluno reprovado.\n");
	}
	if (media >= 5.0 && media <= 6.9){
		printf("Aluno em exame.\n");
		scanf("%lf", &n5);
		printf("Nota do exame: %.1lf\n", n5);
		media = (media + n5) / 2;
		if (media >= 5.0){
			printf("Aluno aprovado.\n");
			printf("Media final: %.1lf\n", media);
		}
		if (media < 5.0){
			printf("Aluno reprovado.\n");
			printf("Media final: %.1lf\n", media);
		}
	}
	
    return 0;
}
