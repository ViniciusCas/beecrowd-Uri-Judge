#include <stdio.h>

int main() {

    int a, b;
    scanf("%i %i", &a, &b);
    
    if(a % b && b % a) {
        printf("Nao sao Multiplos\n");
    } else {
        printf("Sao Multiplos\n");
    }

    return 0;
}