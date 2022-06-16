#include <stdio.h>

void evenOddNumbers(int *values) {
    int total = 0;
    for(int i = 0; i < 5; i++) {
        total = (values[i] % 2 == 0) ? total += 1 : total;
    }

    printf("%i valor(es) par(es)\n", total);
    printf("%i valor(es) impar(es)\n", 5 - total);

    return;
}

void positiveNegativeNumbers(int *values) {
    int total = 0;
    int zeros = 0;
    for(int i = 0; i < 5; i++) {
        total = (values[i] > 0) ? total += 1 : total;
        zeros = (values[i] == 0) ? zeros += 1 : zeros;
    }

    printf("%i valor(es) positivo(s)\n", total);
    printf("%i valor(es) negativo(s)\n", 5 - total - zeros);

    return;
}

int main() {

    int valuesInput[5], total = 0;
    scanf("%i %i %i %i %i", &valuesInput[0], &valuesInput[1], &valuesInput[2], &valuesInput[3], &valuesInput[4]);

    evenOddNumbers(valuesInput);
    positiveNegativeNumbers(valuesInput);

    return 0;
}