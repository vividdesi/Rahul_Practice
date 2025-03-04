#include <stdio.h>

int main() {
    char character = '\0';
    printf("Enter the character whether vowel or consonant\n");
    scanf(" %c", &character);  // Notice the space before %c to consume any newline character

    if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' ||
        character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U') {
        printf("The character is a vowel\n");
    } else {
        printf("The character is a consonant\n");
    }

    return 0;
}

