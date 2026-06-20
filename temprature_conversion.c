#include <stdio.h>
int main (){
    float c , f;
    printf("Enter the temprature in centigrade : ");
    scanf("%f" ,&c);
    f = (c* 9/5)+32;
    printf("Temprature in farenheit  = %f",f);
    printf("\nEnter the temprature in farenheit : ");
    scanf("%f" ,&f);
    c = (f-32)*5/9;
    printf("Temprature in centigrade = %f",c);
    return  0;
}