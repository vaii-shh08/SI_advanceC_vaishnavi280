#include <stdio.h>
int main (){
int num ,product;
printf("Enter a number : ");
scanf("%d",&num);
    product = 1;
for(int i = 1 ; i<=num ; i++){
    product = product *i;
}
printf("Factorial of %d is %d ", num,product);
    return 0;
}