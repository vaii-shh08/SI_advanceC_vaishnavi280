// Maximum subarray sum (Kadane's algo)
#include <stdio.h>
int main (){
    int maxsum , sum ,n ; 
    printf("Enter the size of array :");
    scanf("%d" ,&n);
    int a[n];
    printf("Enter the array elements :");
    for(int i = 0 ; i<n ; i++){
        scanf("%d" , &a[i]);
    }
    maxsum = a[0];
    for ( int i = 0 ; i<n ; i++){
        sum = 0;
        for(int j = i ; j<n ; j++){
            sum = sum + a[j]; 
            if (maxsum < sum ){
                maxsum = sum ;
            }
           
        }
       
    }
    printf("Maximum sum  of subarray is %d " , maxsum );
    return 0;
}