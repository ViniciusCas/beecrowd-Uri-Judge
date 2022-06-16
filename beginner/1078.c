    #include <stdio.h>

    int main() {

        int usrInput;
        scanf("%d", &usrInput);

        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", i, usrInput, i*usrInput);
        }

        return 0;
    }