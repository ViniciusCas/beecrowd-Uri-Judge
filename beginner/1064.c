#include <stdio.h>

int main() {

    int  total = 0;
    double valuesInput[6], average = 0;

    scanf("%lf %lf %lf %lf %lf %lf", &valuesInput[0], &valuesInput[1], &valuesInput[2], &valuesInput[3], &valuesInput[4], &valuesInput[5]);

    for(int i = 0; i < 6; i++) {
        if(valuesInput[i] > 0) { 
            total += 1;
            average += valuesInput[i];
        }
    }
    average /= total;

    printf("%i valores positivos\n", total);
    printf("%.1lf\n", average);

    return 0;
}