#include <stdio.h>
 
int main() {
 
    double A, B, C;
    float med, pa = 2, pb = 3, pc = 5;
    
    scanf("%lf %lf %lf", &A, &B, &C);
    med = (A*pa + B*pb + C*pc) / 10;
    
    printf("MEDIA = %.1f\n", med);
    return 0;
}
