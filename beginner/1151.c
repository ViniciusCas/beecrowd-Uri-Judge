#include <stdio.h>

int main() {

    int usrInp, a = 0, b = 1, c = 0;
    scanf("%d", &usrInp);

    printf("0 1");
    for (int i = 0; i < usrInp - 2; i++) {
        c = a + b;
        a = b;
        b = c; 
        printf(" %d", c);
    }   
    printf("\n");

    return 0;
}