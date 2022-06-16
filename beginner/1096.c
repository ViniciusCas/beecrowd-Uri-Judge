#include <stdio.h>

int main() {

    int j;
    for (int i = 1; i <= 9; i += 2) {
        j = 7;
        for (int n = 0; n < 3; n++) {
            printf("I=%d J=%d\n", i, j);
            j--;
        }
    }

    return 0;
}