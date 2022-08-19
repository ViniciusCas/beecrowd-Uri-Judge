#include <stdio.h>
#include <string.h>

int main() {

    int nInputs;
    char strings[1001];
    char criptografedString[1001];
    //char aux;
    
    scanf("%d", &nInputs);
    for(int i = 0; i < nInputs; i++) {
        scanf(" %[^\n]", strings);

        for (int j = 0; j < strlen(strings); j++) {
           if (strings[j] >= 'a' && strings[j] <= 'z' || strings[j] >= 'A' && strings[j] <= 'Z') {
                strings[j] = strings[j] + 3; 
           }
        }

        int n = 0;
        for (int j = strlen(strings); j > 0; j--) {   
            criptografedString[n] = strings[j-1];
            n++;
        }
        criptografedString[n] = '\0';

        for (int j = strlen(criptografedString) / 2; j < strlen(criptografedString); j++) {
            criptografedString[j] -= 1;
        }
        

        puts(criptografedString);
    }

    return 0;
}

