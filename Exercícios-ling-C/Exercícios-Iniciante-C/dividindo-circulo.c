#include <stdio.h>
long long comb2(long long n) {
    return n * (n - 1) / 2;
}

long long comb4(long long n) {
    if (n < 4) return 0;
    return n * (n - 1) * (n - 2) * (n - 3) / 24;
}

int main() {
    long long N;
    scanf("%lld", &N);

    long long result = 1 + comb2(N) + comb4(N);

    printf("%lld\n", result);
    return 0;
}