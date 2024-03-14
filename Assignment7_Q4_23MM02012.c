#include <stdio.h>

int largest(int arr[], int n) {
    if (n == 1)
        return arr[0];
    return (arr[n - 1] > largest(arr, n - 1)) ? arr[n - 1] : largest(arr, n - 1);
}

int main() {
    int n;
    printf("How many numbers do you want to enter: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Largest number: %d\n", largest(arr, n));
    return 0;
}
