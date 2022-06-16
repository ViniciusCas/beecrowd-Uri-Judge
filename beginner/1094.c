#include <stdio.h>


int main() {

    int inputAmount, total, R = 0, C = 0, S = 0, tmpNum;
    char tmpChar;

    scanf("%d", &inputAmount);

    for (int i = 0; i < inputAmount; i++) {
        scanf(" %d %c", &tmpNum, &tmpChar);

        if (tmpChar == 'R') {
            R += tmpNum;
        } else if (tmpChar == 'C') {
            C += tmpNum;
        } else if (tmpChar == 'S') {
            S += tmpNum;
        }
    }

    total = R + C + S;

    printf(
        "Total: %d cobaias\n"
        "Total de coelhos: %d\n"
        "Total de ratos: %d\n"
        "Total de sapos: %d\n"
        "Percentual de coelhos: %.2f %c\n"
        "Percentual de ratos: %.2f %c\n"
        "Percentual de sapos: %.2f %c\n",
        total, C, R, S, (float)C/total * 100, 37, (float)R/total * 100, 37, S/(float)total * 100, 37
    );


    return 0;
}