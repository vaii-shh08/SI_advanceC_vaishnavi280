#include <stdio.h>
int main() {
    int a[5];
    int  temp;
    printf("Enter the array elements : ");
    for(int i = 0; i<5 ;i++ ){
            scanf("%d",&a[i]);
    }
    for (int i = 0; i < 5; i++) {
        int min = i;

        for (int j = i + 1; j < 5; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        temp = a[min];
        a[min] = a[i];
        a[i] = temp;
    }
    printf("Sorted Array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}