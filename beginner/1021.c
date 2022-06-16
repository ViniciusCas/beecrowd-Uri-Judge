#include <stdio.h>
 
int main() {
	
	double a;
	int n100, n50, n20, n10, n5, n2, m1, m50, m25, m10, m05, m01;
 
 	scanf("%lf", &a);
    
    n100 = (int)a/100;
    a -= 100*n100;
    n50 = (int)a/50;
    a -= 50*n50;
    n20 = (int)a/20;
    a -= 20*n20;
    n10 = (int)a/10;
    a -= 10*n10;
    n5 = (int)a/5;
    a -= 5*n5;
    n2 = (int)a/2;
    a -= 2*n2;
    m1 = (int)a;
    a = (a - (int)a) * 100;
    m50 = a/50;
    a -= m50 * 50;
    m25 = a/25;
    a -= m25 * 25;
    m10 = a/10;
    a -= m10 * 10;
    m05 = a/5;
    a -= m05 * 5;
    m01 = a;
    
    printf(
	"NOTAS:\n"
    "%d nota(s) de R$ 100.00\n"
	"%d nota(s) de R$ 50.00\n"
	"%d nota(s) de R$ 20.00\n"
	"%d nota(s) de R$ 10.00\n"
	"%d nota(s) de R$ 5.00\n"
	"%d nota(s) de R$ 2.00\n"
	"MOEDAS:\n"
	"%d moeda(s) de R$ 1.00\n"
	"%d moeda(s) de R$ 0.50\n"
	"%d moeda(s) de R$ 0.25\n"
	"%d moeda(s) de R$ 0.10\n"
	"%d moeda(s) de R$ 0.05\n"
	"%d moeda(s) de R$ 0.01\n", n100, n50, n20, n10, n5, n2, m1, m50, m25, m10, m05, m01);
    return 0;
}


