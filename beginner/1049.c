#include <stdio.h>
#include <string.h>

int main() {

    char a[11], b[30], c[30];
    scanf("%s %s %s", a, b, c);

    if(!strcmp(a, "vertebrado")) {
        if (!strcmp(b, "ave")) {
            if(!strcmp(c, "carnivoro")) printf("aguia\n");
            else printf("pomba\n");
        } else {
            if(!strcmp(c, "onivoro")) printf("homem\n");
            else printf("vaca\n");
        }         

    } else {
        if(!strcmp(b, "inseto")) {
            if(!strcmp(c, "hematofago")) printf("pulga\n");
            else printf("lagarta\n");
        } else {
            if(!strcmp(c, "hematofago")) printf("sanguessuga\n"); 
            else printf("minhoca\n");
        }       
    }

    return 0;
}