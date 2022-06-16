#include <stdio.h>

int main() {

    int x, z, amount = 0, sum;
    scanf("%d %d", &x, &z);

    while (z <= x) scanf("%d", &z);
    
    sum = x; 
    for (int i = x; sum < z; i++) {
        sum += i + 1;
        amount++;
    }

    printf("%d\n", ++amount);

    return 0;
}