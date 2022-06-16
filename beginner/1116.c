#include <stdio.h> 

int main() {

    int inputsAmount;
    int a, b;


    scanf("%d", &inputsAmount);
    for (int i = 0; i < inputsAmount; i++) {
        scanf("%d %d", &a, &b);
        if (b == 0) printf("divisao impossivel\n");
        else printf("%.1f\n", (float)a/(float)b);
    }


    return 0;
}