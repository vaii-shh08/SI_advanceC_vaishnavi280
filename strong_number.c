#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int temp = num; temp > 0; temp /= 10) {
        int rem = temp % 10;
        int fact = 1;
        for (int i = 1; i <= rem; i++) {
            fact *= i;
        }
        sum = sum + fact;
    }
    if (sum == num)
        printf("%d is a Strong Number", num);
    else
        printf("%d is not a Strong Number", num);

    return 0;
}