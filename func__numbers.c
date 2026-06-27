#include <stdio.h>
int prime(int n)
{
    int i;
    if(n <= 1)
        return 0;
    for(i = 2; i <= n / 2; i++)
    {
        if(n % i == 0)
            return 0;
    }
    return 1;
}
int armstrong(int n)
{
    int sum = 0, rem, temp;
    temp = n;
    while(temp > 0)
    {
        rem = temp % 10;
        sum = sum + rem * rem * rem;
        temp = temp / 10;
    }
    if(sum == n)
        return 1;
    else
        return 0;
}
int perfect(int n)
{
    int i, sum = 0;
    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
            sum = sum + i;
    }
    if(sum == n)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(prime(n))
        printf("Prime Number\n");
    else
        printf("Not a Prime Number\n");
    if(armstrong(n))
        printf("Armstrong Number\n");
    else
        printf("Not an Armstrong Number\n");
    if(perfect(n))
        printf("Perfect Number\n");
    else
        printf("Not a Perfect Number\n");
    return 0;
}