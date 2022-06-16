#include <stdio.h>

int main() {

    int inpAmount, poplulation[2], years;
    double increase[2];
    scanf("%d", &inpAmount);

    for (int i = 0; i < inpAmount; i++) {
        scanf("%d %d %lf %lf", &poplulation[0], &poplulation[1], &increase[0], &increase[1]);

        years = 0;
        while (poplulation[0] <= poplulation[1] && years < 101) {
            poplulation[0] += (int)((poplulation[0] * increase[0])/100);
            poplulation[1] += (int)((poplulation[1] * increase[1])/100);
            years++;
        }

        if (years <= 100) printf("%d anos.\n", years);
        else printf("Mais de 1 seculo.\n");
    }
    return 0;
}