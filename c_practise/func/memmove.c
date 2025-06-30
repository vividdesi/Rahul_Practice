#include <stdio.h>
#include<string.h>

int main() {
      char str[] = "ABCDEFG";

    // Overlapping copy: from str[0..4] to str[2..6]
    memmove(str + 2, str+1, 5);  // May cause corruption!

    printf("Result after memcpy with overlap: %s\n", str);
    
     memcpy(str + 2, str+1, 5);  // May cause corruption!

    printf("Result after memcpy with overlap: %s\n", str);
    return 0;
}
