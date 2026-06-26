#include <stdio.h>

int main()
{
    int n, k, choice, i, start, end, temp;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);
    k = k % n;
    printf("\n1. Left Rotate\n");
    printf("2. Right Rotate\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if(choice == 1)
    {
        start = 0;
        end = k - 1;
        while(start < end)
        {
            temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
        start = k;
        end = n - 1;
        while(start < end)
        {
            temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
        start = 0;
        end = n - 1;
        while(start < end)
        {
            temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }
    else if(choice == 2)
    {
        start = 0;
        end = n - 1;
        while(start < end)
        {
            temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }

        // Reverse first k elements
        start = 0;
        end = k - 1;
        while(start < end)
        {
            temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
        start = k;
        end = n - 1;
        while(start < end)
        {
            temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }
    else
    {
        printf("Invalid Choice!");
        return 0;
    }
    printf("\nRotated Array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}