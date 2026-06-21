#include <stdio.h>
int main (){
    int row;
    printf("Enter number of rows : ");
    scanf("%d",&row);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < row - i - 1; j++) {
            printf(" ");
        }
         int num = 1;
        for (int k = 0; k <= i; k++) {
            printf("%d ", num);
            num = num * (i-k)/(k+1);
        }
        printf("\n");
    }
    return 0;
}
