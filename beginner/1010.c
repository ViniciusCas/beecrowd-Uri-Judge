#include <stdio.h>
 
int main() {
 
 	int p1, p2, qnt1, qnt2;
 	double v1, v2, total; 
 	
    scanf("%d %d %lf", &p1, &qnt1, &v1);
    scanf("%d %d %lf", &p2, &qnt2, &v2);
    
    total = v1*qnt1 + v2*qnt2;
    
 	printf("VALOR A PAGAR: R$ %.2lf\n", total);
    return 0;
}
