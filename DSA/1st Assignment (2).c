#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Array size must be greater than 0.\n");
        return 1;
    }

    int arr[n];  // Variable length array (C99 and above)
    int oddCount = 0, evenCount = 0;

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    printf("Even elements count: %d\n", evenCount);
    printf("Odd elements count: %d\n", oddCount);

    return 0;
}
