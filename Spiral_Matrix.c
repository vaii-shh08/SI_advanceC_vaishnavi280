#include <stdio.h>
int main (){
int a[4][4];
printf("Enter the elements of matrix :\n");
for(int i = 0 ;i<4 ; i++){
    for(int j = 0; j<4; j++){
        scanf("%d",&a[i][j]);
    }
}
int m = 4 , n = 4;
int srow = 0, erow = m-1;
int scol = 0 , ecol = n-1;
while(srow <= erow && scol <= ecol){
    for(int j = scol; j<= ecol;j++ ){
      printf("%d ",a[srow][j]) ; 
    }
    for(int i = srow+1 ; i<=erow ; i++){
        printf("%d ",a[i][ecol]);
    }
     for(int j = ecol-1; j>=scol; j-- ){
       printf("%d ",a[erow][j]); 
    }
    for(int i = erow-1 ; i>=srow+1 ; i--){
       printf("%d ", a[i][scol]);
    }
    srow++ ;
    scol++;
    erow-- ;
    ecol--;

}
return 0;
}