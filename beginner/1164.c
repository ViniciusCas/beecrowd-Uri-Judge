#include <stdio.h>

int isPerfect(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (!(n % i)) sum += i; 
    }
    if (sum == n) return 1;
    else return 0;
}

int main() {

    int inpAmount, usrInp;
    scanf("%d", &inpAmount);

    for (int i = 0; i < inpAmount; i++) {
       
        if( scanf("%d", &usrInp) && isPerfect(usrInp)) {
            printf("%d eh perfeito\n",usrInp);
        } else {
            printf("%d nao eh perfeito\n",usrInp);
        }
    }

    return 0;
}