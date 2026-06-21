#include <stdio.h>
int main (){
    int row ;
    printf("Enter a row : ");
    scanf("%d",&row);
    for(int i = 1 ; i<=row ; i++){
        for(int j = row ; j>i ; j--){
            printf("  ");
        }
        for(int k = 1; k<=2*i-1 ; k++){
        printf("* ");
        }
        printf("\n");
    }
    return 0;
}