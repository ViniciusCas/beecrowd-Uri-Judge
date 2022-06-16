#include <stdio.h>

int main() {

    int inpAmount, inValues = 0;
    scanf("%i", &inpAmount);
    int values[inpAmount];

    for(int i = 0; i < inpAmount; i++) {
        scanf(" %i", &values[i]);
    }
    for(int i = 0; i < inpAmount; i++) {
        if(values[i] >= 10 && values[i] <= 20) inValues++;
    }

    printf("%i in\n%i out\n", inValues, inpAmount - inValues);

    return 0;
}