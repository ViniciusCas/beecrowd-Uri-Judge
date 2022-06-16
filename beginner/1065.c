#include <stdio.h>

int main() {

    int valuesInput[5], total = 0;
    scanf("%i %i %i %i %i", &valuesInput[0], &valuesInput[1], &valuesInput[2], &valuesInput[3], &valuesInput[4]);

    for(int i = 0; i < 5; i++) {
        total = (valuesInput[i] % 2 == 0) ? total += 1 : total;
    }

    printf("%i valores pares\n", total);

    return 0;
}