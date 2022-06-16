#include <stdio.h>
 
int main() {
 
    int usrInp[20], tmp;

    for (int i = 1; i <= 20; i++) {
        scanf("%d", &usrInp[20 - i]);
    }   
    
    for (int i = 0; i < 20; i++) {
        printf("N[%d] = %d\n", i, usrInp[i]);
    }

    return 0;
}