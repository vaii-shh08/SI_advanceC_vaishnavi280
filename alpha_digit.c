#include <stdio.h>

int main() {
    char ch;
    int type;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        type = 1;
    else if (ch >= '0' && ch <= '9')
        type = 2;
    else
        type = 3;

    switch (type) {
        case 1:
            printf(" It is Alphabet");
            break;

        case 2:
            printf("It is Digit");
            break;

        case 3:
            printf("It is Special Character");
            break;
    }
    return 0;
}