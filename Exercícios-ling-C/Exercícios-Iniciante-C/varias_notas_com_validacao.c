#include <stdio.h>

int main() {
    float nota1, nota2, media;
    int i;
    i = 1;
    nota1 = 1;
    nota2 = 1;
    media = 0;

    while (i != 2) {

        if (i == 1) {
            scanf("%f", &nota1);
            while (nota1 < 0 || nota1 > 10) {
                printf("nota invalida\n");
                scanf("%f", &nota1);
            }

            scanf("%f", &nota2);
            while (nota2 < 0 || nota2 > 10) {
                printf("nota invalida\n");
                scanf("%f", &nota2);
            }

        media = (nota1 + nota2) / 2;
        printf("media = %.2f\n", media);
        }

        media = 0;
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &i);
    }

    return 0;
}