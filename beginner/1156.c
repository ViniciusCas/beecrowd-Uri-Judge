#include <stdio.h>
#include <math.h>

int main() {

    float sum = 0;

    for (float i = 1, j = 0; i <= 39; i += 2, j++) {
        sum += i / pow(2, j);
    }

    printf("%.2f\n", sum);
    return 0;
}