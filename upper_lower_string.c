#include <stdio.h>
int main()
{
    char str[100];
    int i, choice;
    printf("Enter a string: ");
    scanf("%s", str);
    printf("1. Lowercase\n2. Uppercase\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if(choice == 1)
    {
        for(i = 0; str[i] != '\0'; i++)
        {
            if(str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] = str[i] + 32;
            }
        }
    }
    else if(choice == 2)
    {
        for(i = 0; str[i] != '\0'; i++)
        {
            if(str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = str[i] - 32;
            }
        }
    }
    printf("Result: %s", str);
    return 0;
}