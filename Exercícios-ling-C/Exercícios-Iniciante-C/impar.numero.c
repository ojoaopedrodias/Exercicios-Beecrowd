#include <stdio.h>
 
int main() {
	
	int X;
	
	scanf("%d", &X);
	
	if (X >= 1 && X <= 1000){
	
		for (int i = 0; i <= X; i++){
			
			if ((i % 2) == 1){
				printf("%d\n", i);
			}
		}
	}
    return 0;
}