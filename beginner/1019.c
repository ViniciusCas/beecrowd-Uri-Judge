#include <stdio.h>
 
int main() {
 
    int a,b, h, m, s;
    
    scanf("%d", &a);
    
    b = a;
    h = a/3600;
    a -= 3600*h;
    m = a/60; 
    a -= 60*m;
    s = a;
    	
 	printf("%d:%d:%d\n", h, m, s);
    return 0;
}
