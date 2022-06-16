#include <stdio.h>

int main() {

    int usrInp, sum = 0, valuesAmount = 0;

    do {
        scanf("%d", &usrInp);
        sum += usrInp;
        valuesAmount++;
    } while(usrInp > 0);

    sum -= usrInp;

    printf("%.2f\n", (float)sum/(valuesAmount - 1));

    return 0;
}

