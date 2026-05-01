#include <stdio.h>

int main() {
    int X, Y, temp, i, soma;
    soma = 0;

    scanf("%d", &X);
    scanf("%d", &Y);

    if (X > Y) {
        temp = X;
        X = Y;
        Y = temp;
    }

    for (i = X; i <= Y; i++) {
        
        if (i % 13 != 0) {
            soma = soma + i;
        }
    }
    printf("%d\n", soma);

    return 0;
}