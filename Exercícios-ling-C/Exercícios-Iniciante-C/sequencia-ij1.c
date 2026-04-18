#include <stdio.h>

int main() {
    int i, j;
    j = 60;
    i = 1;

    while (i <= 37) {
        printf("I=%d J=%d\n", i, j);
        i = i + 3;
        j = j - 5;
    }

    return 0;
}