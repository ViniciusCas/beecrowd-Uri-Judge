#include <stdio.h>

int main() {

    int a, b, c, m1, m2, m3;
    scanf("%d %d %d", &a, &b, &c);
    
    if(a > b) {
        m1 = a;
        m2 = b;
        m3 = c;
    } else {    
        m1 = b;
        m2 = a;
    }
    if(c > m1) {
        m3 = m2;
        m2 = m1;
        m1 = c;
    } else if (c > m2) {
        m3 = m2;
        m2 = c;
    }
    printf("%d\n%d\n%d\n\n", m3, m2, m1);
    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}