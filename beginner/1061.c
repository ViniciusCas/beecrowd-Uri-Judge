#include <stdio.h>
#include <stdlib.h>

int main() {

    int startDay, finalDay;
    int startHour, startMin, startSec;
    int finalHour, finalMin, finalSec;
    int time[4] = {0, 0, 0, 0}; //[0]dias, [1]horas, [2]minutos, [3] segundos
    char tmp[3][5];

    scanf("Dia %i", &startDay);
    scanf("%s : %s : %s\n", tmp[0], tmp[1], tmp[2]);
    startHour = atoi(tmp[0]);
    startMin = atoi(tmp[1]);
    startSec = atoi(tmp[2]);

    scanf("Dia %i", &finalDay);
    scanf("%s : %s : %s", tmp[0], tmp[1], tmp[2]);
    finalHour = atoi(tmp[0]);
    finalMin = atoi(tmp[1]);
    finalSec = atoi(tmp[2]);
    
    if (startSec > finalSec) {
        time[3] = finalSec - startSec + 60;
        finalMin--;
    } else {
        time[3] = finalSec - startSec;
    }

    if (startMin > finalMin) {
        time[2] = finalMin - startMin + 60;
        finalHour--;
    } else {
        time[2] = finalMin - startMin;
    }

    if (startHour > finalHour) {
        time[1] = finalHour - startHour + 24;
        time[0] = finalDay - startDay - 1;
    } else {
        time[1] = finalHour - startHour;
        time[0] = finalDay - startDay;
    }

    printf("%i dia(s)\n", time[0]);
    printf("%i hora(s)\n", time[1]);
    printf("%i minuto(s)\n", time[2]);
    printf("%i segundo(s)\n", time[3]);

    return 0;
}