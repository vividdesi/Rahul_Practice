#include <stdio.h>

void swap(int *p, int *q) {
    int temp = *p;
    *p = *q;
    *q = temp;
}

int partition(int a[], int lb, int ub) {
    int pivot = a[lb];  // Choosing the first element as pivot
    int start = lb + 1;  // Start after pivot
    int end = ub;

    while (start <= end) {
        while (start <= ub && a[start] <= pivot) start++;  // Move start forward
        while (a[end] > pivot) end--;  // Move end backward

        if (start < end) {
            swap(&a[start], &a[end]);
        }
    }
    swap(&a[lb], &a[end]);  // Swap pivot to its correct position
    return end;  // Return partition index
}

void quicksort(int a[], int lb, int ub) {
    if (lb < ub) {
        int loc = partition(a, lb, ub);
        quicksort(a, lb, loc - 1);  // Sort left part
        quicksort(a, loc + 1, ub);  // Sort right part
    }
}

void print_array(int a[], int n) {
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
}

int main() {
    int a[] = {7, 6, 10, 5, 9, 2, 1, 15, 7};
    int n = sizeof(a) / sizeof(a[0]);

    printf("Original array:\n");
    print_array(a, n);

    quicksort(a, 0, n - 1);

    printf("Sorted array:\n");
    print_array(a, n);
    return 0;
}
/*
 *
 * In Quick sort there is a pivot element where we can choose any elemet we want,partition concept,recursive function calling until it solved
 * after selection of pivot element pivot element less than values are stored in left and greater than values are stored in right side
 * after shifting element they are partitioned again and again selectiing pivot until lb >ub
 *
 * keys points to remember-
 * if start <=pivot start ++
 * else start >pivot then end will be compared
 * if end >pivot end --
 * else start <end swap(start,end)
 *
 * if start > end
 * pivot and end values/elements are swapped
 */
