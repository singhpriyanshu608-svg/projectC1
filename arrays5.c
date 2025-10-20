// Revesing an array
#include <stdio.h>
void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    int temp;

    while (start < end) {
        // swap elements
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    reverseArray(arr, size);

    printf("\nReversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

// In C, when you pass an array to a function like reverseArray(arr, size),
// you’re actually passing the address of the first element — not a copy.
// So the function can directly modify the original array.