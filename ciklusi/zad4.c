#include<stdio.h>

int main () {
    int number,tmp; //1234 --> 4+3+2+1 = 10
    scanf("%d", &number);
    int sum = 0;
    /*
     * 1234 -> 4 sum = 4
     * 123  -> 3 sum = 7
     * 12   -> 2 sum = 9
     * 1    -> 1 sum = 10
     * 0 STOP
     * */

    tmp = number;
    while (tmp!=0){
        int lastDigit = tmp%10;
        sum+=lastDigit;
        tmp/=10;
    }

    printf("Zbirot na cifrite na brojot %d e: %d", number, sum);
    return 0;
}