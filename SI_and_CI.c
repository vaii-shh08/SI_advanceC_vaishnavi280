#include <stdio.h>
#include <math.h>
int main (){
    float principal , rate , Time , amount;
    float SI , CI;
    printf("Enter the value of Principal :");
    scanf("%f" ,&principal);
    printf("Enter the value of Rate :");
    scanf("%f" ,&rate);
    printf("Enter the value of Time :");
    scanf("%f" ,&Time);
    SI = (principal*rate*Time)/100;
    amount = principal * pow((1 + rate / 100), Time);
    CI = amount- principal;
    printf("Simple interest = %2f\n",SI);
    printf("Compound interest = %2f",CI);
    return 0;
}