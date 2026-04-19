#include <stdio.h>

int main() {
    int X, Y, i, inicio, fim;

    scanf("%d", &X);
    scanf("%d", &Y);

    if (X < Y) {
        inicio = X;
        fim = Y;
    } else {
        inicio = Y;
        fim = X;
    }

    for (i = inicio + 1; i < fim; i++) {
        if (i % 5 == 2 || i % 5 == 3) {
            printf("%d\n", i);
        }
    }

    return 0;
}