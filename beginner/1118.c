#include <stdio.h>

int main() {
    
    int repeat = -1, count = 0;
    float sum, usrInp;

    do {
        sum = 0;
        count = 0;
        do {
            scanf("%f", &usrInp);
            if (usrInp >= 0 && usrInp <= 10) {
                sum += usrInp;
                count++;
            } else {
                printf("nota invalida\n");
            }
        } while (count != 2);

        printf("media = %.2f\n", sum / 2);

        do {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf(" %d", &repeat);
        } while (repeat != 1 && repeat != 2);
    } while (repeat == 1);

    return 0;
}