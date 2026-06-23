#include <stdio.h>
int main (){
    int a[5] = {6,10,66,99,141};
    int n = 5;
    int start = 0 , end = n-1 , mid ;
    int  target_ele;
    printf("Enter the target element : ");
    scanf("%d" , &target_ele);
    while(start<= end){
        mid = (start+end)/2;
        if(target_ele == a[mid]){
            printf("The targeted element is found at %d index number!",mid);
            break;
        }
        else if(target_ele > a[mid]){
            start = mid+1;
        }
        else {
            end = mid -1;
        }
        if(start>end){
            printf("Element not Found!");
        }
    }
    return 0;
}