#include <stdio.h>
 
int main() {
 
    int t, v;
    double gasto;
    
    scanf("%i %i", &t, &v);
 
 	gasto = v * t / 12.0;
 
 
 	printf("%.3lf\n", gasto);
    return 0;
}
