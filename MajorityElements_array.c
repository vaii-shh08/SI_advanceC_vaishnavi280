#include <stdio.h>
int main (){
    int size;
    printf("Enter the size of the array :");
    scanf("%d" , &size);
    int arr[size];
    printf("Enter the array elements :");
    for(int i = 0; i<size ; i++){
        scanf("%d", &arr[i]);
    }
    int freq = 0 ; int ans = 0;
    for(int i = 0 ; i<size ; i++){
        if (freq == 0){
            ans = arr[i];
        }
        if (ans == arr[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    printf("%d is the majority element in the array", ans);
    return 0 ;
}