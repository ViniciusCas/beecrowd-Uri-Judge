#include <stdio.h>

int main() {

    int usrInp;

    while (scanf("%d", &usrInp) != EOF) {
        int matrix[usrInp][usrInp];

        for (int r = 0; r < usrInp; r++){
            for (int c = 0; c < usrInp; c++){
                matrix[r][c] = 3;
                if (r == c) matrix[r][c] = 1;
                if(r+c == usrInp - 1) matrix[r][c] = 2;
                printf("%d", matrix[r][c]);
            }    
            printf("\n");
        }
    }

    return 0;
}