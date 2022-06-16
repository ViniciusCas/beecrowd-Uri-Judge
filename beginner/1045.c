#include <stdio.h>
#include <math.h>

int main() {

    double a, b, c, tmp;
    scanf("%lf %lf %lf", &a, &b, &c);

    tmp = a;
    a = (a+b+fabs(a-b)) / 2;
    if(tmp != a) {
        b = tmp;
        tmp = a;
    }
    a = (a+c+fabs(a-c)) / 2;
    if(tmp != a) {
        c = tmp;
    }
    
    if(a >= b+c) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        if(a*a == b*b + c*c){
            printf("TRIANGULO RETANGULO\n");
        } else if(a*a > b*b + c*c) {
            printf("TRIANGULO OBTUSANGULO\n");
        } else if(a*a < b*b + c*c) {
            printf("TRIANGULO ACUTANGULO\n");
        }

        if(a == b && a == c) {
            printf("TRIANGULO EQUILATERO\n");
        } else if((a == b && a != c) || (a == c && a != b) || (b == c && a != b)) {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}
