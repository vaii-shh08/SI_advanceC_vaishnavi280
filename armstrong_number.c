#include <stdio.h>

int main() {
    int n ;
    printf("Enter the number : ");
    scanf("%d" ,&n);
    int count = 0, rem, sum = 0, power;
    for(int temp = n; temp > 0; temp /= 10) {
        count++;
    }
    for(int temp1 = n; temp1 > 0; temp1 /= 10) {
        power = 1;
        rem = temp1 % 10;
        for(int i = 1; i <= count; i++) {
            power *= rem;
        }
        sum += power;
    }
    if(sum == n) {
        printf("%d is an Armstrong number!", n);
    }
    else {
        printf("%d is not an Armstrong number!", n);
    }
    return 0;
}