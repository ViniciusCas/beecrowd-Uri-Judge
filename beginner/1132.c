#include <stdio.h>

int main() {

    int usrInp[2], tmp, sum = 0, n;

    scanf("%d %d", &usrInp[0], &usrInp[1]);

    if (usrInp[0] > usrInp[1]) {
        tmp = usrInp[0];
        usrInp[0] = usrInp[1];
        usrInp[1] = tmp;
    }
    
    n = (usrInp[0] - 1 - usrInp[1]) / -1;
    sum = (n * (usrInp[0] + usrInp[1]) )/ 2;

    while (usrInp[0] % 13) usrInp[0]++;
    while (usrInp[1] % 13) usrInp[1]--;
    

    n = (usrInp[0] - 13 - usrInp[1]) / -13;
    sum -= (n * (usrInp[0] + usrInp[1]) )/ 2;

    
    printf("%d\n", sum);

    return 0;
}