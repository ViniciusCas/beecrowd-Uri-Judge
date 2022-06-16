#include <stdio.h>

int main() {

    int usrInp[2], sum, tmp;

    do {
        scanf("%d %d", &usrInp[0], &usrInp[1]);

        if (usrInp[0] > usrInp[1]) {
            tmp = usrInp[0];
            usrInp[0] = usrInp[1];
            usrInp[1] = tmp;

        }

        if (usrInp[0] > 0 && usrInp[1] > 0) {
            sum = 0;
            for (int i = usrInp[0]; i <= usrInp[1]; i++) {
                printf("%d ", i);
                sum += i;
            }
            printf("Sum=%d\n", sum);
        }
    } while (usrInp[0] > 0 && usrInp[1] > 0);

    return 0;
}