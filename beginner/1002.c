#include <stdio.h>
 
int main() {
 
	double pi = 3.14159, r, A;

	scanf("%lf", &r);
	
	A = pi * (r * r);
	printf("A=%.4lf\n", A);

	return 0;
}
