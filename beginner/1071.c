#include <stdio.h>

int main() {

    int valueInput[2], total = 0;
    scanf("%i %i", &valueInput[0], &valueInput[1]);

    int tmp;
    if(valueInput[0] > valueInput[1]) {
        tmp = valueInput[1];
        valueInput[1] = valueInput[0];
        valueInput[0] = tmp;
    }
    
    if(valueInput[0] % 2 == 0) valueInput[0]++;
    else valueInput[0] += 2; 
    
    for(int i = valueInput[0]; i < valueInput[1]; i += 2) {
        total += i;
    }
        printf("%i\n", total);
    return 0;
}