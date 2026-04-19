#include<stdio.h>

int main(){
	
	int x, y, z;
	
	printf("digite os valores dos lados do triangulo: ");
	scanf("%d %d %d", &x, &y, &z);
	
	if (x != y && x != z && y != z){
		printf("O triangulo eh escaleno!");
	}
	else{
		if ((x == y && x != z) || (x == z && x != y) || (y == z && y != x)){
			printf("O triangulo eh isoseles!");
		}
		else{
			if (x == y && x == z){
				printf("O triangulo eh equilatero!");
			}
		}
	}
	
	return 0;
}
