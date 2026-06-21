#include <stdio.h>
int main (){
    int arr[5] = {3,0,2,0,4};
    int left = 0 , right = 5-1;
    int leftMax = 0 , rightMax = 0;
    int water = 0;
    while(left<right){
        if(arr[left] <arr[right]){
            if(arr[left] >= leftMax){
                leftMax = arr[left];
            }
            else {
                water += leftMax - arr[left];
            }
            left++;
        }
       
     else{
        if(arr[right] >= rightMax){
            rightMax = arr[right];
        }
        else {
            water += rightMax - arr[right];
        }
        right--;
    }
}
printf("Total water trapped = %d",water);
    return 0;
}