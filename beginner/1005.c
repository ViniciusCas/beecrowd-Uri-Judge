#include <stdio.h>
 
int main() {
 
    double A, B;
    float med, pa = 3.5, pb = 7.5;
    
 	scanf("%lf %lf", &A, &B);
 	med = (A*pa + B*pb) / 11; 
 	
 	printf("MEDIA = %.5f\n", med);
 	
    return 0;
}
