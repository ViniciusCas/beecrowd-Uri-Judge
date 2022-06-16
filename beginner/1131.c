#include <stdio.h>

void printOut(int total, int inter, int gremio, int empates) {

    printf("%d grenais\n", total);
    printf("Inter:%d\n", inter);
    printf("Gremio:%d\n", gremio);
    printf("Empates:%d\n", empates);
    if (inter > gremio) printf("Inter venceu mais\n");
    else if(inter < gremio) printf("Gremio venceu mais\n");
    else printf("Nao houve vencedor\n");

}

int restart(void) {
    int again;
    do {
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &again);
    } while (again != 1 && again != 2);

    if(again == 1) return 1;
    else return 0;
}

int main() {
    
    int goalsInp[2], total, inter, gremio, empates, retry;
    total = inter = gremio = empates = 0;

    do {
        // total = inter = gremio = empates = 0;
        scanf("%d %d", &goalsInp[0], &goalsInp[1]);

        total++;
        
        if (goalsInp[0] > goalsInp[1]) inter++;
        else if (goalsInp[0] < goalsInp[1]) gremio++;
        else empates++;
    } while (restart());   

    printOut(total, inter, gremio, empates);

    return 0;
}