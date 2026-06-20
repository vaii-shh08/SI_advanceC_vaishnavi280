#include <stdio.h>
int main (){
    char op;
    int a , b;
    printf("Enter Character :");
    scanf(" %c" ,&op);
    printf("Enter the values of a and b :");
    scanf("%d %d", &a ,&b);
    switch(op){
        case'+' : printf("Addition  = %d\n", a+b);
        break;
        case'-' : printf("subtraction  = %d\n", a-b);
        break;
        case'*' : printf("Multiplication  = %d\n", a*b);
        break;
        case'/' : printf("division  = %d\n", a/b);
        break;
        default:printf("Invalid Operator");
    }
    return 0;
}