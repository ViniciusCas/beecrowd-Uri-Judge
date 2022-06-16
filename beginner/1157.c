#include <stdio.h>

int main() {

    int usrInp;
    scanf("%d", &usrInp);

    for (int i = 1; i <= usrInp; i++) {
        if (usrInp % i == 0) printf("%d\n", i);
    }

    return 0;
}