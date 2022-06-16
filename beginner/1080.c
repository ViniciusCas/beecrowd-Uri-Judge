#include <stdio.h>

int main() {

    int numInputs, greater = 0, position;

    for (int i = 0; i<100; i++) {
        scanf("%d", &numInputs);
        if (numInputs > greater) {
            greater = numInputs;
            position = i + 1;
        }
    }

    printf("%d\n%d\n", greater, position);

    return 0;
}