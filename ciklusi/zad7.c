#include<stdio.h>

int main() {
    int n;
    int counter0 = 0, counter1 = 0, counter2 = 0;
    scanf("%d", &n);

    while (n>0) {
        int number;
        scanf("%d", &number);
//        printf("%d ", number);
        int ostatok = number % 3;
        switch (ostatok) {
            case 0:
                counter0++;
                break;
            case 1:
                counter1++;
                break;
            default: //isto so case2
                counter2++;
        }
        --n;
    }

    printf("0: %d 1: %d 2: %d", counter0, counter1, counter2);
    return 0;
}