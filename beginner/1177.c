#include <stdio.h>

int main() {

    int usrInp;

    scanf("%d", &usrInp);

    for (int i = 0, j = 0; i < 1000; i++, j++) {
        if(j == usrInp) j = 0;
        printf("N[%d] = %d\n", i, j);
    }

    return 0;
}