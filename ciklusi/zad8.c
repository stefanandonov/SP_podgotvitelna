#include<stdio.h>

/*
 * Да се напише програма што ќе провери дали даден позитивен цел број чија
вредност се чита од тастатура е совршен број. Даден број велиме дека е совршен
ако е делив со збирот од неговите делители (вклучувајќи го и 1, но не и самиот
број)


 x -> perfect/not perfect

 1,2,3,4,5,6,7,8,9,...,x --> da se ispecatat site sovrsheni broevi od 1 do X.

 */

int sumOfDivisors(int number){
    int i, sum=0; //da pokazeme sto ke se sluci ako sum ne e inicijalizirano
    for (i=1;i<number;i++){
        if (number % i == 0){
            sum+=i;
        }
    }
    return sum;
}

int main () {
    int i,X;
    scanf("%d", &X);

    for (i=2;i<=X;i++) {
        if ((i % sumOfDivisors(i)) == 0) {
            printf("Perfect number: %d\n", i);
        } else {
            printf("Regular number: %d\n", i);
        }
    }


    return 0;
}