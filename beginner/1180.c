#include <stdio.h>

int main() {

    int inpAmount, smaller, position;
    scanf("%d", &inpAmount);
    int usrInp[inpAmount];

    for (int i = 0; i < inpAmount; i++) {
        if (scanf("%d", &usrInp[i]) && usrInp[i] < smaller) {
            smaller = usrInp[i];
            position = i;
        }
        if (i == 0) {
            smaller = usrInp[0];
            position = 0;
        }
    }

    printf("Menor valor: %d\nPosicao: %d\n", smaller, position);

    return 0;
}