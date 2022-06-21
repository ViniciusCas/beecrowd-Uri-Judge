#include <stdio.h> 

int main() {

    double matrix[12][12], result = 0;
    char charInp;
    int valuesAmount;

    scanf("%c", &charInp);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            if (scanf("%lf", &matrix[i][j]) && j > i) {
                result += matrix[i][j];
                valuesAmount++;
            }
        }
    }

    if (charInp == 'M') result /= valuesAmount;

    printf("%.1lf\n", result);

    return 0;
}