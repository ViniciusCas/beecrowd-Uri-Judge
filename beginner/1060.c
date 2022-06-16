#include <stdio.h>

int main() {

    int valuesInput[6], total = 0;
    scanf("%i %i %i %i %i %i", &valuesInput[0], &valuesInput[1], &valuesInput[2], &valuesInput[3], &valuesInput[4], &valuesInput[5]);

    for(int i = 0; i < 6; i++) {
        total = (valuesInput[i] > 0) ? total += 1 : total;
    }

    printf("%i valores positivos\n", total);

    return 0;
}