#include <stdio.h>
int main (){
    int a[5],i,j,n,temp;
    n = 5;
    printf("The array elements are : ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if (a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("The sorted array is :");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}