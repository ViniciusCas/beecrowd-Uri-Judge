#include <stdio.h>

int main() {

    float sum = 0, usrInp;
    int count = 0;

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

    return 0;
}