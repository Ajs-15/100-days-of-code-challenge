// Rotate an array to the right by k positions.
#include <stdio.h>

void reverse(int arr[], int start, int end) {
    int temp;
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int n, k, i;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k (number of positions to rotate right): ");
    scanf("%d", &k);

    k = k % n;  // Normalize k

    // Step 1: Reverse entire array
    reverse(arr, 0, n - 1);
    // Step 2: Reverse first k elements
    reverse(arr, 0, k - 1);
    // Step 3: Reverse remaining elements
    reverse(arr, k, n - 1);

    printf("Array after rotating right by %d positions:\n", k);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
