#include <stdio.h>

int main() {

    int inputAmount, r1, r2, finalR;

    scanf("%d", &inputAmount);
    for (int i = 0; i < inputAmount; i++) {
        scanf("%d %d", &r1, &r2);

        finalR = r1 + r2;

        printf("%d\n", finalR);
    }
    return 0;
}

