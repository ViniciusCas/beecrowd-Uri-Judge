#include <stdio.h>

int main() {

    int inpAmount, velocity, greater, lvl;
    while (scanf("%d", &inpAmount) != EOF) {
        greater = 0;
        for (int i = 0; i < inpAmount; i++) {
            scanf("%d", &velocity);
            if (velocity > greater) greater = velocity;
        }

        if (greater < 10) lvl = 1;
        else if (greater >= 10 && greater < 20) lvl = 2;
        else lvl = 3;
    
        printf("%d\n", lvl);
    }
    
    return 0;
}