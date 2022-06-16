#include <stdio.h>

int main() {

    double usrInput, imp;
    scanf("%lf", &usrInput);

    if(usrInput <= 2000) {
        printf("Isento\n");
    } else if(usrInput > 2000 && usrInput <= 3000) {
        imp = (usrInput - 2000) * 0.08;
        printf("R$ %.2lf\n", imp);
    } else if(usrInput > 3000 && usrInput <= 4500) {
        imp = 1000 * 0.08 + (usrInput - 3000) * 0.18;
        printf("R$ %.2lf\n", imp);
    } else if(usrInput > 4500) {
        imp = 1000 * 0.08 + 1500 * 0.18 + (usrInput - 4500) * 0.28;
        printf("R$ %.2lf\n", imp);
    }

    return 0;
}