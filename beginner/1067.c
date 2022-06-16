#include <stdio.h>

int main() {

    int valueInput;
    scanf("%i", &valueInput);

    for(int i = 1; i <= valueInput; i += 2) {
        printf("%i\n", i);
    }

    return 0;
}