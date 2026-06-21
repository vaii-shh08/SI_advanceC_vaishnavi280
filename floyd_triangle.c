#include <stdio.h>
int main (){
    int row , a;
    printf("Enter the number of rows : ");
    scanf("%d",&row);
    a = 1;
    for(int i = 1 ; i<=row ; i++){
        for(int j = 1; j<=i ; j++){
            printf(" %d ",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}