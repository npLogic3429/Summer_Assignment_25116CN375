#include <stdio.h>
#include <limits.h>

int main() {
    int arr[100], n;
    int largest = INT_MIN, secondLargest = INT_MIN;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    printf("Second Largest Element = %d\n", secondLargest);

    return 0;
}