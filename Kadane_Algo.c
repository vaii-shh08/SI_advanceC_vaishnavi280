#include <stdio.h>
int main (){
    int sum , maxsum ,n;
    printf("Enter the size of array :");
    scanf("%d" , &n);
    int a[n];
    printf("Enter the elements of array :");
    for(int i = 0 ; i<n ; i++){
        scanf("%d" ,&a[i]);
    }
    sum = a[0];
    maxsum = a[0];
    for(int i = 1; i < n; i++) {
        if(sum < 0){
            sum = a[i];
        }
        else{
            sum += a[i];
        }

        if(sum > maxsum){
            maxsum = sum;
        }
    }
    printf("Maximum sum of subarray is %d", maxsum);
    return 0;
}