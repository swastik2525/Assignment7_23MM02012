#include<stdio.h>

int main(){
    char str[100];
    int i=0,n=0;
    printf("\n Enter a string:");
    fgets(str,100,stdin);

    while(str[n]!='\0')
    {
        n++;
    }
    n--;
    for(i=0;i<n/2;i++)
    {
        if(str[i]!=str[n-i-1])
        {
        printf("\n Not a palindrome");
        return 0;
        }
    }
    printf("\n Palindrome");

    return 0;
}