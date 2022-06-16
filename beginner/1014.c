#include <stdio.h>
 
int main() {
 
    int d;
    double lt;
    
    scanf("%i %lf", &d, &lt);
    
    printf("%.3lf km/l\n", d/lt);
    
    return 0;
}
