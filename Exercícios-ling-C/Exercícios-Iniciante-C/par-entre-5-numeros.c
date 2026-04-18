#include <stdio.h>
 
int main() {
	
	int valor, i, par;
	par = 0;
	
	for (i = 0; i < 5; i++){
		scanf("%d", &valor);
		
		if ((valor % 2) == 0){
			par += 1;
		}
	}
	
	printf("%d valores pares\n", par);
	
    return 0;
}