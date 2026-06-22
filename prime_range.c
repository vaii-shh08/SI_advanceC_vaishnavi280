#include <stdio.h>
int main (){
    int range , temp , count ;
    printf("Enter the range : ");
    scanf("%d",&range);
    for(int i = 1; i<=range ; i++){
        count = 0;
        for(int j = 1 ;j<=i ; j++){
        if(i%j == 0){
            count++;
        }
    }
    if(count == 2){
        printf("%d ",i);
    }
    }
    return 0;
}