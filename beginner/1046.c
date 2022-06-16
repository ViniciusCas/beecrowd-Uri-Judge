#include <stdio.h> 

int main() {
    
    int a, b, total;
    scanf("%d %d", &a, &b);

    if(a >= b) {
        total = b-a+24;
    } else {
        total = b-a;
    }

    printf("O JOGO DUROU %d HORA(S)\n", total);

    return 0;
}