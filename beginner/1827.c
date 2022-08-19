#include <stdio.h>

int main() {

    int usrInp;

    while (scanf("%d", &usrInp) != EOF) {
        int matrix[usrInp][usrInp], oneStart = usrInp/3;
        for (int r = 0; r < usrInp; r++) {
            for (int c = 0; c < usrInp; c++) {
                if (r+1 / 2 == usrInp / 2 && c+1 /2 == usrInp / 2) matrix[r][c] = 4;
                else if(r >= oneStart && r < usrInp - oneStart && c >= oneStart && c < usrInp - oneStart) matrix[r][c] = 1;
                else if(r == c) matrix[r][c] = 2;
                else if(r + c == usrInp -1) matrix[r][c] = 3;
                else matrix[r][c] = 0;
                printf("%d", matrix[r][c]);
            }  
            printf("\n"); 
        }
        printf("\n");
    }

    return 0;
}