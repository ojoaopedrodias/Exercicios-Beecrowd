#include <stdio.h>

int main() {
    int N, i, quad, cubo;

    scanf("%d", &N);

    for (i = 1; i<= N; i++) {
        quad = i * i;
        cubo = i * i * i;
        printf("%d %d %d\n", i, quad, cubo); 
    }

    return 0;
}