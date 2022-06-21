#include <stdio.h> 

int main() {

    double matrix[12][12], result = 0;
    char charInp;
    int valuesAmount = 0;

    scanf("%c", &charInp);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &matrix[i][j]);
            if (j < i && j + i < 11) {
                result += matrix[i][j];
                valuesAmount++;
            }
        }   
    }

    if (charInp == 'M') result /= valuesAmount;

    printf("%.1lf\n", result);

    return 0;
}