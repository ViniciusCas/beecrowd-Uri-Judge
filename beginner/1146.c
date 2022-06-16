#include <stdio.h>

int main() {

    int usrInp;

    while (scanf("%d", &usrInp) && usrInp) {
        
        for (int i = 1; i < usrInp; i++) {
            printf("%d ", i);
        }
        printf("%d\n", usrInp);

    }

    return 0;
}