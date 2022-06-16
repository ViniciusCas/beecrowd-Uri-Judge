#include <stdio.h>

int main() {
 
    int inpAmount, usrInp;
    long long int a, b, c;

    scanf("%d", &inpAmount);

    for (int i = 0; i < inpAmount; i++) {
        scanf("%d", &usrInp);

        if (usrInp == 0) printf("Fib(0) = 0\n");
        else if (usrInp == 1) printf("Fib(1) = 1\n");
        else {
            a = 0;
            b = 1;
            c = 0;
            for (int i = 0; i <= usrInp - 2; i++) {
                c = a + b;
                a = b;
                b = c; 
                
            } 
            printf("Fib(%d) = %lld\n", usrInp, c);
        } 
    }

    return 0;
}