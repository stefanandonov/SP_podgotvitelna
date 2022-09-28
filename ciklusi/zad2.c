#include<stdio.h>

//Да се испечатат сите непарни природни броеви до
//1000
int main () {
    int i;

    for (i=1;i<1000;i+=2){
        printf("%d", i);
        if (i!=999){
            printf(", ");
        }
    }
    return 0;

}