#include<stdio.h>
#include<math.h>

int main(){
	
	int x, y, z, n;
	
	printf("Digite um valor: ");
	scanf("%d", &x);
	
	
	y = x * x;
	z = sqrt(y);
	//printf("%d", y);
	
	if (x == z){
		printf("quadrado perfeito!");
	}
	 
	return 0;
}
