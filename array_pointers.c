#include <stdio.h>
int main()
{
    int arr[100], n;
    int *ptr;
    printf("Enter size of array: ");
    scanf("%d", &n);
    ptr = arr;
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", ptr + i);
    printf("Array elements are:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", *(ptr + i));
    return 0;
}