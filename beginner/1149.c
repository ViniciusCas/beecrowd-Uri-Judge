#include <stdio.h>

int main() {

    int a, n = -1, sum = 0;
    scanf("%d %d", &a, &n);
    while (n <= 0) {
        scanf("%d", &n);
    }

    for(int i = a; i <= a + n - 1; i++) sum += i;

    printf("%d\n", sum);

    return 0;
}