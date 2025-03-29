#include <stdio.h>

void input_array(int a[],int n)
{  for (int i = 0; i < n; i++) 
        scanf("%d",&a[i]);
}

void print_array(int a[], int n) {
    for (int i = 0; i < n; i++) 
        printf("%d ", a[i]);
    printf("\n");
}


void selection_sort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[min]) 
                min = j;
        }

 
        if (min != i) {
            int temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
}

int main(void) 
{
	int n;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	if(n<=0)
	{
		printf("Invalid array size\n");
		return 1;
	}
	int a[n];
	printf("Enter the values\n");
	input_array(a,n);

	printf("Before sorting:\n");
	print_array(a, n);

    selection_sort(a, n);

    printf("After sorting:\n");
    print_array(a, n);

    return 0;
}

