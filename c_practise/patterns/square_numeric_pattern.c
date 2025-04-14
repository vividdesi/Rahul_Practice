#include <stdio.h>

int main() {
    int k, h;

    for (int i = 1; i <= 5; i++) {
        k = 2;  // Resets for middle row calculation
        h = 1;

        for (int j = 1; j <= 5; j++) {
            // Top and bottom rows (all 3s)
            if (i == 1 || i == 5) {
                printf("3");
            }
            // Second and fourth rows (3 at edges, 2 in middle)
            else if (i == 2 || i == 4) {
                if (j == 1 || j == 5)
                    printf("3");
                else
                    printf("2");
            }
            // Middle row with incrementing pattern
            else {
                if (j <= 3)
                    printf("%d", 5 - k++);
                else
                    printf("%d", ++h);
            }
        }
        printf("\n");
    }

    return 0;
}

