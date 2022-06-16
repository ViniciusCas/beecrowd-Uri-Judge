#include <stdio.h>

int isPrime(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (!(n % i)) sum += i; 
    }

    if (sum == 1 + n) return 1;
    else return 0;
}

int main() {

    int inpAmount, usrInp;
    scanf("%d", &inpAmount);

    for (int i = 0; i < inpAmount; i++) {
       
        if( scanf("%d", &usrInp) && isPrime(usrInp)) {
            printf("%d eh primo\n",usrInp);
        } else {
            printf("%d nao eh primo\n",usrInp);
        }
    }

    return 0;
}