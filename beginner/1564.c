#include <stdio.h>

int main() {

    int usrInp;

    while (scanf("%d", &usrInp) != EOF) {
        if (usrInp == 0) printf("vai ter copa!\n");
        else printf("vai ter duas!\n");
    }

    return 0;
}