#include <stdio.h>

int main() {
    int N, i, v1, v2, v3;

    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        if (i == 1){
            v1 = i;
            v2 = v1 + 1;
            v3 = v2 + 1;
        }
        printf("%d %d %d PUM\n", v1, v2, v3);
        v1 += 4;
        v2 += 4;
        v3 += 4;
    }

    return 0;
}