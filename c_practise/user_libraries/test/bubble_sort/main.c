#include <stdio.h>
#include "bubble_sort.h"

int main() {
    int arr[] = {5, 1, 4, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    printf("Before sorting\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");


    bubble_sort(arr, n);

    printf("After sorting\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

