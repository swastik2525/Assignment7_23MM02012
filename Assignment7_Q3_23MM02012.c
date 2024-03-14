#include <stdio.h>

void reverse(char str[], int length)
{
    if (length == 0)
    {
        return;
    }
    else
    {
        printf("%c", str[length - 1]);
        reverse(str, length - 1);
    }
}

int main()
{
    char str[100];
    printf("\nEnter the string: ");
    fgets(str, sizeof(str), stdin);

    int length = 0;
    while (str[length] != '\0' && str[length] != '\n')
    {
        length++;
    }

    printf("\nReversed string: ");
    reverse(str, length);

    return 0;
}
