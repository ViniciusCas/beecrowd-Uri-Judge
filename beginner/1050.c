#include <stdio.h>

int main() {

    int ddds[8] = {61, 71, 11, 21, 32, 19, 27, 31};
    char cidades[8][15] = {
        "Brasilia",
        "Salvador",
        "Sao Paulo",
        "Rio de Janeiro",
        "Juiz de Fora",
        "Campinas",
        "Vitoria",  
        "Belo Horizonte"};

    int user_input;
    scanf("%i", &user_input);

    int index = -1;
    for(short int i = 0; i < 8; i++) {
        if(ddds[i] == user_input) {
            index = i;
            break;    
        }
    }

    if(index > -1) {
        printf("%s\n", cidades[index]);
    } else {
        printf("DDD nao cadastrado\n");
    }

    return 0;
}