// Linear Search
#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // return index when found
        }
    }
    return -1; // if not found after full loop
}

int main() {
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = 7;
    int target = 8;

    int result = linearSearch(arr, size, target);

    if (result != -1)
        printf("Element %d found at index %d\n", target, result);
    else
        printf("Element %d not found in the array\n", target);

    return 0;
}
