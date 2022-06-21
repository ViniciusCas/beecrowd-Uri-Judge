#include <stdio.h>

int main() {

    int usrInp, pair[5], odd[5];

    for (int i = 0, a = 0, b = 0; i < 15; i++) { 
        scanf("%d", &usrInp);
        if (usrInp % 2) {
            odd[a] = usrInp;
            a++;
            if (a > 4) {
                for (int j = 0; j < 5; j++) {
                    printf("impar[%d] = %d\n", j, odd[j]);
                    odd[j] = 0;
                }    
                a = 0;
            }
        } else {
            pair[b] = usrInp;
            b++;
            if (b > 4) {
                for (int j = 0; j < 5; j++) {
                    printf("par[%d] = %d\n", j, pair[j]);
                    pair[j] = 0;
                }    
                b = 0;
            }
        }
    }

    for (int i = 0; odd[i] != 0; i++) {
        printf("impar[%d] = %d\n", i, odd[i]);
    }
    for (int i = 0; pair[i] != 0; i++) {
        printf("par[%d] = %d\n", i, pair[i]);
    }

    return 0;
}