#include <stdio.h>
#include <stdlib.h>
#define ROW 2
#define COL 2

void addition_2d(int **a, int **b);
void insert_elements(int **a);
void display_elements(int **a);

int main(void)
{
    int **arr, **arr1;
    int i;

    arr = (int **)malloc(ROW * sizeof(int *));
    arr1 = (int **)malloc(ROW * sizeof(int *));
    for (i = 0; i < ROW; i++) {
        arr[i] = (int *)malloc(COL * sizeof(int));
        arr1[i] = (int *)malloc(COL * sizeof(int));
    }

    insert_elements(arr);
    insert_elements(arr1);

    printf("Elements in arr 2-D array are:\n");
    display_elements(arr);

    printf("Elements in arr1 2-D array are:\n");
    display_elements(arr1);

    printf("Doing the addition between the two arrays\n");
    addition_2d(arr, arr1);

    // Free memory
    for (i = 0; i < ROW; i++) {
        free(arr[i]);
        free(arr1[i]);
    }
    free(arr);
    free(arr1);

    return 0;
}

void addition_2d(int **a, int **b)
{
    int i, j;
    int **addition = (int **)malloc(ROW * sizeof(int *));
    for (i = 0; i < ROW; i++)
        addition[i] = (int *)malloc(COL * sizeof(int));

    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            addition[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("The addition values are:\n");
    display_elements(addition);

    for (i = 0; i < ROW; i++)
        free(addition[i]);
    free(addition);
}

void insert_elements(int **a)
{
    int i, j;
    printf("Insert elements:\n");
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            scanf("%d", &a[i][j]);
        }
    }
}

void display_elements(int **a)
{
    int i, j;
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

