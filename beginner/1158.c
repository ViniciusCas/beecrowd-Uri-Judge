#include <stdio.h>

int main() {

    int inpAmount, sum, x, y;
    scanf("%d", &inpAmount);

    for (int i = 0; i < inpAmount; i++) {
        scanf("%d %d", &x, &y);
        
        if(!(x % 2)) x++;
        
        sum = 0;
        for (int j = x; y != 0; y--, j += 2) {
            sum += j;
        }

        printf("%d\n", sum);
    }

    return 0;
}
