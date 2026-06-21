#include <stdio.h>
int main (){
    int row ;
    printf("Enter no of rows : ");
    scanf("%d",&row);
    //upper half of the diamond 
    for(int i = 1; i<=row ; i++){
        for(int j = row ; j>i ; j--){
            printf(" ");         
        }
        for(int k = 1 ; k<=2*i-1 ; k++){
            printf("*");
        }
        printf("\n");
    }
    // for lower half of the diamond
    for(int i = row-1 ; i>=1 ; i--){
        for(int j = row ; j>i ; j--){
            printf(" ");         
        }
        for(int k = 1 ; k<=2*i-1 ; k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}