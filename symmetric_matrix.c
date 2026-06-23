#include <stdio.h>
int main (){
    int a [3][3],i,j;
    int symmetric =1;
    printf("Enter the elements of Matrix A :\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix is :\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("The transpose of Matrix A is :\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    for(i = 0 ; i<3 ; i++){
        for(j = 0; j<3 ; j++){
           if (a[i][j] != a[j][i]){
               symmetric = 0;
             break;
            }
        }
    }
    if(symmetric){
        printf("\nMatrix A is symmetric!");
    }
    else{
        printf("\nMatrix A is not symmetric!");
    }
    return 0;
}