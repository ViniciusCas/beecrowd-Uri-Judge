#include <stdio.h>

int main() {

    int valueInput;
    scanf("%i", &valueInput);

    if (valueInput % 2 == 0) valueInput++;

    for(int i = valueInput; i <= valueInput + 10; i += 2) {
        printf("%i\n", i);
    }

    return 0;
}