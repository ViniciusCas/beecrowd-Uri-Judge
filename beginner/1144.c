#include <stdio.h>

int main() {

    int usrInp;
    scanf("%d", &usrInp);

    for (int i = 1; i <= usrInp; i++) {
        printf("%d %d %d\n", i, i*i, i*i*i);
        printf("%d %d %d\n", i, i*i + 1, i*i*i + 1);
    }


    return 0;
}