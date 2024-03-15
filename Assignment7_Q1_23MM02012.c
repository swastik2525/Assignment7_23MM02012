#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i = 0;
    printf("\n Enter a string:");
    gets(str); 
    int l;
    l = strlen(str);
    l--;
    char c;
    printf("\n Enter the character:");
    scanf("%c", &c);
    int h = 0;
    for (i = 0; i < l; i++)
    {
        if (str[i] == c)
            h++;
    }
    printf("\n The freq of the character is:%d", h);
    return 0;
}
