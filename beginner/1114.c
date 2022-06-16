#include <stdio.h>

#define PASSWORD 2002

int main() {

    int usrInp = 0;

    while (usrInp != PASSWORD) {
        scanf("%d", &usrInp);
        if(usrInp == PASSWORD) printf("Acesso Permitido\n");
        else printf("Senha Invalida\n");
    }
    

    return 0;
}