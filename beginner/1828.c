#include <stdio.h>
#include <string.h>

#define TESOURA "tesoura"
#define PAPEL "papel"
#define PEDRA "pedra"
#define SPOCK "Spock"
#define LAGARTO "lagarto"


int main() {

    int inputAmount;
    scanf("%d", &inputAmount);
    char a[2][10];

    for (int i = 1; i <= inputAmount; i++) {
        scanf(" %s", a[0]);
        scanf(" %s", a[1]);

        printf("Caso #%d: ", i);
        if (!strcmp(a[0], a[1])) printf("De novo!\n");
        else if (!strcmp(a[0], PEDRA)) {
            if (!strcmp(a[1], PAPEL) || !strcmp(a[1], SPOCK)) printf("Raj trapaceou!\n");
            else printf("Bazinga!\n");
        } else if (!strcmp(a[0], PAPEL)) {
            if (!strcmp(a[1], TESOURA) || !strcmp(a[1], LAGARTO)) printf("Raj trapaceou!\n");
            else printf("Bazinga!\n");
        } else if (!strcmp(a[0], TESOURA)) {
            if (!strcmp(a[1], PEDRA) || !strcmp(a[1], SPOCK)) printf("Raj trapaceou!\n");
            else printf("Bazinga!\n");
        } else if (!strcmp(a[0], LAGARTO)) {
            if (!strcmp(a[1], TESOURA) || !strcmp(a[1], PEDRA)) printf("Raj trapaceou!\n");
            else printf("Bazinga!\n");
        } else if (!strcmp(a[0], SPOCK)) {
            if (!strcmp(a[1], PAPEL) || !strcmp(a[1], LAGARTO)) printf("Raj trapaceou!\n");
            else printf("Bazinga!\n");
        }
    } 

    return 0;
}