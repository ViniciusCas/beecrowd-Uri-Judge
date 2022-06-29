#include <stdio.h>
#include <math.h>

int main() {

    int a, b, c, result;

    while (scanf("%d", &a) && a != 0) {
        scanf("%d %d", &b, &c);
    
        result = ((a * b)*100) / c;
        result = pow(result, 0.5);
        printf("%d\n", result);
    }

    return 0;
}