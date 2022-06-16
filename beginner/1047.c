#include <stdio.h> 

int main() {
    
    int hi, mi, hf, mf, totalh , totalm;
    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);

    if(mi > mf) {
        totalm = mf-mi+60;
        totalh = hi >= hf ? hf-hi+24 : hf-hi ;
        totalh--;
    } else if(mi == mf) {
        totalm = 0;
        totalh = hi >= hf ? hf-hi+24 : hf-hi ;
    } else {
        totalm = mf-mi;
        if(hi > hf) {
            totalh = hf-hi+24;
        } else if (hi == hf){
            totalh = 0;
        } else {
            totalh = hf-hi;
        }
    }    

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", totalh, totalm);

    return 0;
}