#include <stdio.h>

int main() {

    int matrixLen, digit, startLen;

    while (scanf("%d", &matrixLen) && matrixLen != 0) {
        int matrix[matrixLen][matrixLen];
        
        digit = 1;
        startLen = 0;
        
        while (startLen <= matrixLen) {
            for (int i = startLen; i < matrixLen; i++) {
                matrix[startLen][i] = digit;
                matrix[i][startLen] = digit;
                digit++;
            }
            digit = 1;
            startLen++;
        }
    
        for (int r = 0; r < matrixLen; r++) {
            for (int c = 0; c < matrixLen; c++) {
                if (c == 0) printf("%3d", matrix[r][c]);
                else printf(" %3d", matrix[r][c]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}