#include <stdio.h>

int main() {

    int inpValue;
    scanf("%i", &inpValue);

    for(int i = 2; i <= inpValue; i += 2) {
        printf("%d^2 = %d\n", i, i*i);
    }

    return 0;
}