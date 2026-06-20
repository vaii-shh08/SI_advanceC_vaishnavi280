#include <stdio.h>
int main (){
    int a ;
    printf("Enter a integer value :");
    scanf("%d" ,&a);
    printf("Integer value is %d\n",a);
    float b;
    printf("Enter a floating value : ");
    scanf("%f",&b);
    printf("Floating value is %2f\n",b);
    char c;
    printf("Enter a character :");
    scanf(" %c",&c);
    printf("Character is %c\n",c);
    return 0;
}