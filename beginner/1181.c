#include <stdio.h> 

int main() {

    double matrix[12][12], result = 0;
    char charInp;
    int inpLine; 

    scanf("%d %c", &inpLine, &charInp);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &matrix[i][j]);
        }
    }

    for (int i = 0; i < 12; i++) {
        result += matrix[inpLine][i];
    }

    if (charInp == 'M') result /= 12;

    printf("%.1lf\n", result);

    return 0;
}