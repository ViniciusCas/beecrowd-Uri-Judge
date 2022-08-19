#include <stdio.h>

int main() {

    int n, nM, nL, cM, cL, atribute, winner;
    int bM[100][100], bL[100][100];

    while (scanf("%d", &n) != EOF) {
        
        (void)scanf("%d %d", &nM, &nL);

        for (int i = 0; i < nM; i++) {
            for (int j = 0; j < n; j++) {
                (void)scanf("%d", &bM[i][j]);  
            }
        }   
    
        for (int i = 0; i < nL; i++) {
            for (int j = 0; j < n; j++) {
                (void)scanf("%d", &bL[i][j]);  
            }
        }

        (void)scanf("%d %d %d", &cM, &cL, &atribute);

        if (bM[cM-1][atribute-1] > bL[cL-1][atribute-1]) winner = 1;
        else if (bM[cM-1][atribute-1] == bL[cL-1][atribute-1]) winner = 0;
        else winner = -1;

        if(winner == 0) printf("Empate\n");
        else if(winner == 1) printf("Marcos\n");
        else printf("Leonardo\n");

    }

    return 0;
}
