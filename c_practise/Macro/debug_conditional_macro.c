#include <stdio.h>

// Define DEBUG_MODE to enable debugging
//`#define DEBUG_MODE 1

#if DEBUG_MODE
    #define DEBUG_PRINT(msg) printf("DEBUG: %s\n", msg)
#else
    #define DEBUG_PRINT(msg) // Do nothing
#endif

int main() {
    printf("Program started\n");

    DEBUG_PRINT("This is a debug message.");

    printf("Program finished\n");

    return 0;
}

