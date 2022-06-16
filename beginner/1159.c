#include <stdio.h>

int main() {

    int usrInp = -1, sum, a5;
    
    while (scanf("%d", &usrInp) == 1 && usrInp != 0) {
        if(usrInp % 2) usrInp++;

        a5 = usrInp + 8;
        sum = ((usrInp + a5) * 5) /2;

        printf("%d\n", sum);
    }
    return 0;
}