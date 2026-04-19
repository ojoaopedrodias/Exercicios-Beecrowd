#include <stdio.h>
 
int main() {
 
    int a, b, s;
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &s);
    
    if (a > b && a > s){
    	printf("%d eh o maior\n", a);
	}
	else{
		if((b > a && b > s) || (b == a && b > s) || (b > a && b == s)){
			printf("%d eh o maior\n", b);
		}
		else{
			if((s > a && s > b) || (a == s)){
				printf("%d eh o maior\n", s);
			}
		}
	}
    
    return 0;
}
