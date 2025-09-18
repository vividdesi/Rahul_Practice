#include <stdio.h>

int add(int a, int b) {
    int sum = a + b;
    return sum;
}

int buggy_function(int n) {
    int arr[5] = {0, 1, 2, 3, 4};
    int result = 0;

    for (int i = 0; i <= n; i++) {   // <-- Bug: might access out-of-bounds
        result += arr[i];
    }
    //arr[1000000]=10;

    return result;
}

int main() {
    int x = 5;
    int y = 10;

    printf("Adding %d and %d...\n", x, y);
    int z = add(x, y);
    printf("Result: %d\n", z);

    printf("Now testing buggy_function...\n");
    int res = buggy_function(143);     // <-- Bug: passing 7 (array size only 5)
    printf("Buggy result: %d\n", res);

    return 0;
}

