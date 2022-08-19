#include <stdio.h> 

int main() {

    float matrix[12][12], result, valuesAmount;
    char charInp;
    result = valuesAmount = 0;

    scanf("%c", &charInp);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            if (scanf("%f", &matrix[i][j]) && j < i) {
                result += matrix[i][j];
                valuesAmount++;
            }
        }
    }

    if (charInp == 'M') result /= valuesAmount;

    printf("%.1f\n", result);

    return 0;
}
