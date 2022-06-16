#include <stdio.h>

int main() {

    char a[11], b[30], c[30];
    scanf("%s %s %s", a, b, c);
    char d[13] = "vertebrado";
    for(int i = 0; i <= sizeof("vertebrado"); i++){
        printf("%c\n","vertebrado"[i]);
    }

    for(int i = 0; i <= sizeof(a); i++){
        printf("%c\n",a[i]);
    }

    printf("%d\n", a == "vertebrado");
    if(a == "vertebrado") {
        if (b == "ave") {
            if(c == "carnivoro") printf("aguia\n");
            else printf("pomba\n");
        } else {
            if(c == "onivoro") printf("homem\n");
            else printf("vaca\n");
        }         

    } else if(a == ""){
        if(b == "inseto") {
            if(c == "hematofago") printf("pulga\n");
            else printf("lagarta\n");
        } else {
            if(c == "hematofago") printf("sanguessuga\n"); 
            else printf("minhoca\n");
        }       
    }

    return 0;
}