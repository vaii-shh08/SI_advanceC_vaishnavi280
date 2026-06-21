#include <stdio.h>
int main (){
    int a[4][4];
    printf("Enter the elements : \n");
    for(int i = 0 ; i<4 ; i++){
        for(int j = 0 ; j<4 ; j++){
            scanf("%d",&a[i][j]);
        }
    }
    int row = 4; // can be taken as input from the user as row 
    int column = 4; // can be taken as input from the user as column 
    for(int i = 0; i<4 ; i++){
        for(int j = 0 ; j<4 ; j++){
            if(i==0 || j==0 || i== row-1 || j== column-1){
                printf("%d ",a[i][j]);
            }
        }
    }
    return 0;
}