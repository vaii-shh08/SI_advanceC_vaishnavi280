#include <stdio.h>
int main (){
    int a[5] , sum = 0;
    float avg;
    printf("Enter the elements : ");
    for(int i = 0 ; i<5 ; i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0 ; i<5 ; i++){
        sum = sum+a[i];
    }
    printf("The sum is %d\n" , sum);
    avg = sum/5.0;
    printf("The average is %f\n",avg);
    return 0;
}