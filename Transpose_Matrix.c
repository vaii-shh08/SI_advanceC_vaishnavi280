#include <stdio.h>
int main (){
    int a [5][3],i,j;
    printf("Enter the elements of Matrix A :\n");
    for(i=0;i<5;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix is :\n");
    for(i=0;i<5;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("The transpose of Matrix A is :\n");
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}