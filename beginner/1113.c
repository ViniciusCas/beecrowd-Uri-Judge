#include <stdio.h>

int main() {

    int X = -1, Y = 0;
    while(X != Y) {
        scanf("%d %d", &X, &Y);

        if (X == Y) break;
        else if (X > Y) printf("Decrescente\n");
        else printf("Crescente\n"); 
    }

    return 0;
}