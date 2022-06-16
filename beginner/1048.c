#include <stdio.h>

int main() {

    double salario;
    scanf("%lf", &salario);

    if(salario >= 0 && salario <= 400) {
        printf(
        "Novo salario: %.2lf\n"
        "Reajuste ganho: %.2lf\n"
        "Em percentual: 15 %c\n", salario*1.15, salario*0.15, 37);
    } else if(salario > 400 && salario <= 800) {
        printf(
        "Novo salario: %.2lf\n"
        "Reajuste ganho: %.2lf\n"
        "Em percentual: 12 %c\n", salario*1.12, salario*0.12, 37);
    } else if(salario > 800 && salario <= 1200) {
        printf(
        "Novo salario: %.2lf\n"
        "Reajuste ganho: %.2lf\n"
        "Em percentual: 10 %c\n", salario*1.1, salario*0.1, 37);
    } else if(salario > 1200 && salario <= 2000) {
        printf(
        "Novo salario: %.2lf\n"
        "Reajuste ganho: %.2lf\n"
        "Em percentual: 7 %c\n", salario*1.07, salario*0.07, 37);
    } else if(salario > 2000) {
        printf(
        "Novo salario: %.2lf\n"
        "Reajuste ganho: %.2lf\n"
        "Em percentual: 4 %c\n", salario*1.04, salario*0.04, 37);
    }

    return 0;
}