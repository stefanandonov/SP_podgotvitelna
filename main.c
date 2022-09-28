#include<stdio.h>

int main () {
    int x = 5;
    int y = 2;
    double z = (float) x/y; //2.5
    z = z + 0.4; //2.9
    printf("%f", z);
    return 0;
}