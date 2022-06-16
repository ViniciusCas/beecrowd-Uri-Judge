#include <stdio.h>
 
int main() {
 
    float usrInp[100];

    for (int i = 0; i < 100; i++) {
        if (scanf("%f", &usrInp[i]) && usrInp[i] <= 10) printf("A[%d] = %.1f\n", i, usrInp[i]);

    }
 
    return 0;
}