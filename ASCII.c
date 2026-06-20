#include <stdio.h>
int main (){
    char ch ;
    printf("Enter a character :");
    scanf("%c",&ch);
    int ascii = (int)ch;
    printf("ASCII value of the character is : %d" , ascii);
    return 0;
}