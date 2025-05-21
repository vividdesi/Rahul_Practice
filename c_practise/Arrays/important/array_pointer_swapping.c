#include <stdio.h>

void sortPointers(int *arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (*arr[j] > *arr[j + 1]) {
                // Swap the pointers
                int *temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int a = 10, b = 5, c = 30;
    int *arr[] = { &a, &b, &c };

    int size = sizeof(arr) / sizeof(arr[0]);

    // Before sorting
    printf("Before sorting:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", *arr[i]);
    }
    printf("\n");

    // Sort the array of pointers
    sortPointers(arr, size);

    // After sorting
    printf("After sorting:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", *arr[i]);
    }
    printf("\n");

    return 0;
}

