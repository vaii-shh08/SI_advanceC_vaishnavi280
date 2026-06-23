#include <stdio.h>
int main() {
    int size;
    printf("Enter the size: ");
    scanf("%d", &size);
    int a[size];
    printf("Enter the array elements: ");
    for(int i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
    int max = a[0], min = a[0];
    for(int i = 1; i < size; i++) {
        if(a[i] > max) {
            max = a[i];
        }
        if(a[i] < min) {
            min = a[i];
        }
    }
    printf("%d is the maximum element in the array\n", max);
    printf("%d is the minimum element in the array", min);
    return 0;
}