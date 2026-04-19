#include <stdio.h>
 
int main() {
    
    int start, end, dur;
    
    scanf("%d", &start);
    scanf("%d", &end);
    while (start < 24 && end < 24){
    	if (start >= end && end <= start){
    		dur = (24 - start) + end;
    		printf("O JOGO DUROU %d HORAS(S)\n", dur);
		}
		if ( start < end && end > start){
			dur = end - start;
			printf("O JOGO DUROU %d HORAS(S)\n", dur);
		}
		break;
	}
	
    return 0;
}
