#include <stdio.h>
int main (){
int n , rem , rev =0 ,temp ;
printf("Enter a number : ");
scanf("%d",&n);
for(temp  = n; temp>0 ; temp /= 10){
    rem = temp%10;
    rev = rev*10+rem;
}
printf("Reversed number is : %d" ,rev);
    return 0;
}