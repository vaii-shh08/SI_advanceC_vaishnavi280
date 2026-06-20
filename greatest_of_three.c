#include <stdio.h>
int main () {
    int x , y ,z;
    printf("Enter number 1 : ");
    scanf("%d", &x);
    printf("Enter number 2 : ");
    scanf("%d", &y);
    printf("Enter number 3 : ");
    scanf("%d", &z);
    if(x>y){
        if(x>z)
        printf("%d is the greatest. ", x);
        else //z>x>y
        printf("%d is the greatest.",z);
    }
    else{
      if(y>z)
       printf("%d is the greatest. ",y);
      else //z>y>x
       printf("%d is the greatest. ",z);
    } 
    return 0;
}