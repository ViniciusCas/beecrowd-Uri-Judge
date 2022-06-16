#include <stdio.h>

int main() {

    int usrInp, k = 1;
    scanf("%d", &usrInp);

    for (int i = 1; i <= usrInp; i++) {
        for (int j = k; j <= k + 2; j++) {
            printf("%d ", j);
        }
        printf("PUM\n");
        k += 4;
    }

    return 0;
}