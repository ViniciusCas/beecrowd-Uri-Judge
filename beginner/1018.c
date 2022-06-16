#include <stdio.h>
 
int main() {
 
    int a, b, n100, n50, n20, n10, n5, n2, n1;
    
    scanf("%d", &a);
    
    b = a;
    n100 = a/100;
    a -= 100*n100;
    n50 = a/50;
    a -= 50*n50;
    n20 = a/20;
    a -= 20*n20;
    n10 = a/10;
    a -= 10*n10;
    n5 = a/5;
    a -= 5*n5;
    n2 = a/2;
    a -= 2*n2;
    n1 = a;
    
    
    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",b , n100, n50, n20, n10, n5, n2, n1);
 
    return 0;
}	
