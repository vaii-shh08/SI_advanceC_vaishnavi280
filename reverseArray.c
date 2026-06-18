#include <stdio.h>
int main(){
    int arr[5] = {2,4,5,6,7};
    int temp;
    for(int i = 0 ; i<5/2 ; i++){
        temp = arr[i];
        arr[i] = arr[5-1-i];
        arr[5-1-i] = temp;
    }
    printf("Reversed array is :");
    for(int i = 0; i<5 ; i++){
        printf("%d " , arr[i]);
    }
    return 0;

}