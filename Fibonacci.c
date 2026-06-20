#include <stdio.h>
int main (){
    int n;
    printf("Enter n :");
    scanf("%d",&n);
    int num1 = 0, num2 = 1 , num3;
    for(int i = 0 ; i<n ; i++){
        num3 = num1 + num2;
        printf("%d ",num1);
        num1 = num2;
        num2 = num3;
    }
    return 0;
}