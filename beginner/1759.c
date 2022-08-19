#include <stdio.h>

#define HO "Ho"

int main() {

    int usrInp;
    scanf("%d", &usrInp);

    for (int i = 0; i < usrInp; i++) {
        if (i == 0) printf("%s", HO);
        else printf(" %s", HO);
    }
    printf("!\n");

    return 0;
}