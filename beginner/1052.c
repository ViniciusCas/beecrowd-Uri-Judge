#include <stdio.h>

int main() {

    int monthNumber;
    char monthName[12][10] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December" 
    };

    scanf("%i", &monthNumber);

    printf("%s\n", monthName[monthNumber - 1]);

    return 0;
}