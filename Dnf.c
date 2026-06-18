#include <stdio.h>
int main (){
    int arr[7] = {0,2,2,1,0,1,2};
    int mid = 0 ,low = 0 , temp ;
    int high =  7-1;
    while(mid<= high){
        if(arr[mid] == 0){
         int temp = arr[low];
          arr[low] = arr[mid];
          arr[mid] = temp;
          mid++;
          low++;
        }
        else if (arr[mid] == 1){
            mid++;
        }
        else{
            temp = arr[high];
            arr[high] = arr[mid];
            arr[mid] = temp;
            high--;
        }
    }
    printf("Sorted Array is :\n");
        for(int i = 0 ; i<7 ; i++){
            printf("%d ",arr[i]);
        }
    return 0;
}