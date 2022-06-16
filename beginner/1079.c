#include <stdio.h>

int main() {

    int inpAmount;
    double num[3], total;
    scanf("%d", &inpAmount);

    for (int i = 0; i<inpAmount; i++) {
        scanf(" %lf %lf %lf", &num[0], &num[1], &num[2]);
        printf("%.1lf\n", (num[0] * 2 + num[1] * 3 + num[2] * 5) / 10);
    }

    return 0;
}