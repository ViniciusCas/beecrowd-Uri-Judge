#include <stdio.h>

int main() {

    int usrInp[10];

    for (int i = 0; i < 10; i++) {
        if (scanf("%d", &usrInp[i]) && usrInp[i] <= 0) usrInp[i] = 1;
        printf("X[%d] = %d\n", i, usrInp[i]);
    }

    return 0;
}