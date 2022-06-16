#include <stdio.h>

int main() {

    int usrInput;
    scanf("%d", &usrInput);   

    for(int i = 0; i*usrInput < 10000 - 2; i++) {
        printf("%d\n", i*usrInput + 2);
    }

    return 0;
}