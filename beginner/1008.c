#include <stdio.h>
 
int main() {
 
    int n, hrs;
    double ush, salary; 
    
 	scanf("%d %d %lf", &n, &hrs, &ush);
 		
 	salary = hrs * ush; 
 	printf("NUMBER = %d\nSALARY = U$ %.2lf\n", n, salary);
 	
    return 0;
}
