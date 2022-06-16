#include <stdio.h>

int main() {
 
    int vectors[10];
 
    scanf("%d", &vectors[0]);

    printf("N[0] = %d\n", vectors[0]);  

    for (int i = 1; i < 10; i++) {
        vectors[i] = vectors[i-1] * 2;
        printf("N[%d] = %d\n", i, vectors[i]);    
    }

    return 0;
}