#include <stdio.h>

int main() {

    float sum = 0;

    for (float i = 1; i <= 100; i++) {
        sum += 1.0 / i;
    }

    printf("%.2f\n", sum);
    return 0;
}