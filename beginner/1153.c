#include <stdio.h>

int fatorial(int n) {
    int a;
    if (n <= 0) return 1;
    else {
        a = n *fatorial( n-1 );
        return a;
    }
}

int main() {

    int usrInp;
    scanf("%d", &usrInp);

    printf("%d\n", fatorial(usrInp));

    return 0;   
}