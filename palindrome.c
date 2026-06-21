#include <stdio.h>
int main (){
    int num , rem , rev , temp ;
    rev = 0;
    printf("Enter the number : ");
    scanf("%d",&num);
for(temp = num; temp >0 ; temp /= 10){
    rem = temp%10;
    rev = rev*10+rem;
}
if(num == rev){
    printf("%d is Palindrome Number !" ,num);
}
else{
    printf("%d is not Palindrome Number !" ,num);
}
    return 0;
}