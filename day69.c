// Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    int maxVal = 0;

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        if (nums[i] > maxVal)
            maxVal = nums[i];
    }

    // Create a visited array of size maxVal + 1
    bool visited[maxVal + 1];
    for (int i = 0; i <= maxVal; i++)
        visited[i] = false;

    // Single pass to find the repeated element
    for (int i = 0; i < n; i++) {
        if (visited[nums[i]]) {
            printf("Repeated element: %d\n", nums[i]);
            return 0;
        }
        visited[nums[i]] = true;
    }

    printf("No repeated element found.\n");
    return 0;
}