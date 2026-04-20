#include <stdio.h>

int main() {
    int i, j;
    j = 7;

    for (i = 1; i <= 9; i++) {
        printf("I=%d J=%d\n", i, j);
        j -= 1;
        i -= 1;

        if (j == 4) {
            i += 2;
            j += 3;
        }
    }

    return 0;
}