#include <stdio.h>

int main() {
    int N, i, quadrado;

    scanf("%d", &N);

    if (N > 5 && N < 2000) {

        for (i = 1; i <= N; i++) {

            if (i % 2 == 0) {
                quadrado = i * i;
                printf("%d^2 = %d\n", i, quadrado);
            }
        }
    }

    return 0;
}