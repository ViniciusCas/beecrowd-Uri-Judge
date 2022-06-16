#include <stdio.h>

int main() {

    int usrInp, alcool, gasolina, diesel;
    alcool = gasolina = diesel = 0;

    do {
        scanf("%d", &usrInp);
        if (usrInp == 1) alcool++;
        else if (usrInp == 2) gasolina++;
        else if (usrInp == 3) diesel++;
    } while (usrInp != 4);

    printf("MUITO OBRIGADO\n");
    printf(
        "Alcool: %d\n"
        "Gasolina: %d\n"
        "Diesel: %d\n", alcool, gasolina, diesel
    );

    return 0;
}