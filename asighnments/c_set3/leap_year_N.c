#include <stdio.h>

int main() {
    int N, i;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("Leap years from 1 to %d are:\n", N);

    for (i = 1; i <= N; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) {
            printf("%d\n", i); 
        }
    }

    return 0;
}

