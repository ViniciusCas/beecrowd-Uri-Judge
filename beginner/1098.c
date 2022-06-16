#include <stdio.h>

int main() {

    int j = 10;
    for (int i = 0, a = 1; i <= 20; i += 2, a++) {
        for (int n = 0; n < 3; n++) {
            if(j % 10 == 0) printf("I=%i J=%i\n", (int)(i/10) , (int)(j/10));
            else            printf("I=%.1f J=%.1f\n", i/10.0, j/10.0);
            
            j += 10;
        }

        j = 10 + 2 * a; 
    }

    return 0;
}