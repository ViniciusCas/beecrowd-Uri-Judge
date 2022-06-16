#include <stdio.h>

int main() {

    double usrInp;

    scanf("%lf", &usrInp);

    for (int i = 0, j = 0; i < 100; i++) {
        printf("N[%d] = %.4lf\n", i, usrInp);
        usrInp /= 2;
    }

    return 0;
}