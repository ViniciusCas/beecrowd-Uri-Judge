#include <stdio.h>
#include <math.h>

int main() {

    int inputAmount;
    int numInp[2], tmp, sum, n;

    scanf("%d", &inputAmount);

    for (int i = 0; i < inputAmount; i++) {
        scanf(" %d %d", &numInp[0], &numInp[1]);

        if (numInp[0] > numInp[1]) {
            tmp = numInp[0] ;
            numInp[0] = numInp[1];
            numInp[1] = tmp;
        } 

        //printf("n0 = %d, n1= %d\n", numInp[0], numInp[1]);

        sum = 0;
        for (int i = numInp[0] + 1; i < numInp[1]; i++) {
            if(i % 2) sum += i;
        }

        printf("%d\n", sum);
    }

    return 0;
}