#include<stdio.h>

/*
 * Да се напише програма во која од тастатура се внесува бројот на редици n.
Програмта треба да ја отпечати следнава слика:
1
12
123
1234
12345
123456
1234567
 * */

int main () {
    int i,j,n;
    scanf("%d", &n);

    for (i=1;i<=n;i++){ //ke ni gi iterira redicite
        for (j=1;j<=i;j++){
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}