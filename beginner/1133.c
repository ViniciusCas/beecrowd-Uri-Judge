#include <stdio.h>

int main() {

    int usrInp[2], tmp;

    scanf("%d %d", &usrInp[0], &usrInp[1]);

    if (usrInp[0] > usrInp[1]) {
        tmp = usrInp[0];
        usrInp[0] = usrInp[1];
        usrInp[1] = tmp;
    }

    for (int i = usrInp[0] + 1; i < usrInp[1]; i++) {
        if(i % 5 == 2 || i % 5 == 3) printf("%d\n", i);
    }

    return 0;
}