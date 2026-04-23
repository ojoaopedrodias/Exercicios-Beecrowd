#include <stdio.h>

int main() {
    int n, i, j, x, y, temp, soma;
    soma = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        scanf("%d", &x);
        scanf("%d", &y);

        if (x > y) {
            temp = x;
            x = y;
            y = temp;
        }

        for (j = x + 1; j < y; j++) {
            
            if (j % 2 == 1) {
                soma = soma + j;
            }
        }
        printf("%d\n", soma);
        soma = 0;
    }

    return 0;
}