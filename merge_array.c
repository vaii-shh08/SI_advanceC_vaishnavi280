#include  <stdio.h>
int main (){
    int a[5] ,b[5] , c[10];
    printf("Enter the elements of the array 1 :\n");
    for(int i =0 ; i<5 ; i++){
        scanf("%d",&a[i]);
    }
      printf("\nEnter the elements of the array 2 :\n");
    for(int j =0 ; j<5 ; j++){
        scanf("%d",&b[j]);
    }
    for(int i = 0; i < 5; i++) {
        c[i] = a[i];
    }
    for(int i = 0; i < 5; i++) {
        c[i + 5] = b[i];
    }
    printf("\nMerged Array: ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", c[i]);
    }
    return 0;
}