#include<stdio.h>

int main() {
    int i, x, n;
    int y = 1;
    scanf("%d%d", &x, &n);
    // y = x ^ n = (x*x*x*x * ... *x) N-pati

    for (i = 0; i < n; i++) { //ova ke zavrti N pati
        y*=x;
    }

    printf("%d ^ %d = %d", x, n, y);
    return 0;
}