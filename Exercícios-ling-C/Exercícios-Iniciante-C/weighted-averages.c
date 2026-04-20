#include <stdio.h>

int main() {
    int n, i;
    double x, y, z, media;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        scanf("%lf", &x);
        scanf("%lf", &y);
        scanf("%lf", &z);
        media = (x * 2) + (y * 3) + (z * 5);
        printf("%.1lf\n", media/10);
    }

    return 0;
}