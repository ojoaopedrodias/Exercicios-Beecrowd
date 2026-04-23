#include <stdio.h>

int main() {
    int opc, alcool, gasolina, diesel;
    alcool = 0;
    gasolina = 0;
    diesel = 0;

    printf("1.Alcool\n");
    printf("2.Gasolina\n");
    printf("3.Diesel\n");
    scanf("%d", &opc);

    while (opc < 4 || opc > 4) {

        if (opc == 1) {
            alcool += 1;
        }
        if (opc == 2) {
            gasolina += 1;
        }
        if (opc == 3) {
            diesel += 1;
        }

        scanf("%d", &opc);
    }

    if (opc == 4) {
        printf("MUITO OBRIGADO\n");
        printf("Alcool: %d\n", alcool);
        printf("Gasolina: %d\n", gasolina);
        printf("Diesel: %d\n", diesel);
    }
}