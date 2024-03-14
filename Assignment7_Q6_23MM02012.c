#include <stdio.h>
#include <string.h>

int checkSubstring(char arr1[], char arr2[]) {
    int n = strlen(arr1) - 1; // Length of arr1
    int m = strlen(arr2) - 1; // Length of arr2

    for (int i = 0; i < m; i++) {
        int check = 0;
        for (int j = 0; j < n; j++) {
            if (arr1[j] == arr2[i]) {
                check = 1;
                break;
            }
        }
        if (!check)
            return 0;
    }
    return 1;
}

int main() {
    char arr1[100];
    printf("Enter a string : ");
    fgets(arr1, sizeof(arr1), stdin);

    char arr2[100];
    printf("string to be searched: ");
    fgets(arr2, sizeof(arr2), stdin);

    if (checkSubstring(arr1, arr2))
        printf("String 2 is a substring of string 1.\n");
    else
        printf("String 2 is not a substring of string 1.\n");

    return 0;
}
