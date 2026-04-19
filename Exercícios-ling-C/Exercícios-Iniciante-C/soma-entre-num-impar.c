#include <stdio.h>
 
int main() {
	
	int X, Y, temp, soma, i;
	soma = 0;
	scanf("%d", &X);
    scanf("%d", &Y);
    
    if (X < Y){
    	temp = X;
    	X = Y;
    	Y = temp;
	}
	
	for (i = Y + 1;i < X; i++){
		if (i % 2 != 0){
			soma += i;
		}
	}
	
    printf("%d\n", soma);
    
    return 0;
}