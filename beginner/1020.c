#include <stdio.h>
 
int main() {
 
    int x, ano, m, d;
    
    scanf("%d", &x);
    
    ano = x / 365;
    x -= ano * 365;
    m = x / 30;
    x -= m * 30;
    d = x;
    
 	printf(
 	"%d ano(s)\n"
 	"%d mes(es)\n"
 	"%d dia(s)\n", ano, m, d);
    return 0;
}
