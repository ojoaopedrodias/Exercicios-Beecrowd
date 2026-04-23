#include <stdio.h>

int main() {
    int X, i;

    scanf("%d", &X);

    for (i = 1; i <= 12; i++) {

        if (X % 2 == 1) {
            printf("%d\n", X);
        }
        X++;
    }

    return 0;
}