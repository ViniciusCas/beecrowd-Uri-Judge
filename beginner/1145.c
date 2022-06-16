#include <stdio.h>

int main() {

    int usrInp[2];
    
    scanf("%d %d", &usrInp[1], &usrInp[0]);

    for (int i = 1; i <= usrInp[0]; i++) {
        if ((i % usrInp[1])) printf("%d ", i);
        else printf("%d\n", i);
    }
    if (usrInp[0] % usrInp[1]) printf("\n");

    return 0;
}