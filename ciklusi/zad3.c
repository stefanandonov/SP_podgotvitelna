#include<stdio.h>

int main () {
    int i, number;
    scanf("%d", &number);

    for(i=1;i<=number;++i) {
        if (number % i == 0) {
            printf("%d", i);
            if (i!=number) {
                printf(", ");
            }
        }

    }


    return 0;
}