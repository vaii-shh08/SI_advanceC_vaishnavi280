#include <stdio.h>

int main(){
    float r;
    float pi = 3.1415;
    float area;
    printf("Enter Radius : ");
  scanf("%f", &r);
    area = pi*r*r;
    printf("The area of the circle =  %f\n", area);
    float circumference;
    circumference = 2*pi*r;
    printf("The circumference of the circle =  %f", circumference);
    return 0;
}

