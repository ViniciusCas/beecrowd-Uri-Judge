#include <stdio.h>
 
int main() {
 
 	char n[256];
    double salary, amount, total; 
    
 	scanf("%s %lf %lf", n, &salary, &amount);
 		
 	salary += amount * 0.15; 
 	printf("TOTAL = R$ %.2lf\n", salary);
 	
    return 0;
}
