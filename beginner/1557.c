#include <stdio.h>
#include <math.h>

int main() {

    int usrInp, num, firstNum, lastNum, digits;

    while (scanf("%d", &usrInp) && usrInp != 0) {

        int matrix[usrInp][usrInp];

        num  = firstNum = 1;
        digits = 0;
        
        lastNum = pow(4, usrInp-1);
        while (lastNum > 0) {
                digits++;
                lastNum /= 10;
        }

        for (int r = 0; r < usrInp; r++) {
            num = firstNum;
            for (int c = 0; c < usrInp; c++) { 
                matrix[r][c] = num;
                num *= 2;
                if (c == 0) printf("%*d", digits, matrix[r][c]); 
                else printf(" %*d", digits, matrix[r][c]);
            }
            printf("\n");
            firstNum *= 2;
        }
        printf("\n");        
    }

}