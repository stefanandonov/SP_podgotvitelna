#include<stdio.h>

int main (){
    int i=1,j;
    int n;
    scanf("%d", &n);
    //101<=100? NE -> izlezi od ciklus
//    for(i=1;i<=n;i++) {
//        printf("%d", i);
//        if (i!=n){
//            printf(", ");
//        }else {
//            printf("\nGotovooo!");
//        }
//    }

    while (i<=n) {
        printf("%d", i);
        if (i!=n){
            printf(", ");
        }else {
            printf("\nGotovooo!");
        }
        ++i;
    }

    return 0;
}
