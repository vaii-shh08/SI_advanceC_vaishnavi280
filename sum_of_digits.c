// WAP to print the sum of all digits of all given number.
#include <stdio.h>
int main (){
    int num , rem;
    printf("Enter the number : ");
    scanf("%d",&num);
    int sum =0;
    while(num>0){
         rem = num%10;
        num /= 10;    
        sum = sum + rem;
    }
    printf("The sum of all digits in a given number is : %d", sum);
    return 0;
}