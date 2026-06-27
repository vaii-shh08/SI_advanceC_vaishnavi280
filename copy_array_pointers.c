#include <stdio.h>
int main()
{
    int arr1[100], arr2[100], n;
    int *p1, *p2;
    printf("Enter size of array: ");
    scanf("%d", &n);
    p1 = arr1;
    p2 = arr2;
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", p1 + i);
    for (int i = 0; i < n; i++)
        *(p2 + i) = *(p1 + i);
    printf("Copied array:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", *(p2 + i));
    return 0;
}