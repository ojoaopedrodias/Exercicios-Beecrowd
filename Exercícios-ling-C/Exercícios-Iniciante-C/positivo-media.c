#include <stdio.h>
 
int main() {
	
	double valor, media;
	int i, positivo;
	positivo = 0;
	media = 0;
	
	for (i = 0; i < 6; i++){
		scanf("%lf", &valor);
		if (valor > 0){
			media = media + valor;
			positivo++;
		}
	}
	
	printf("%d valores positivos\n", positivo);
	printf("%.1lf\n", media/positivo);
	
    return 0;
}