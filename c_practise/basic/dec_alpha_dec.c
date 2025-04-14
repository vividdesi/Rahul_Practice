#include <stdio.h>
#include <string.h>

void numberToWords(int num, char *output) {
    const char *ones[] = {
        "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine",
        "ten", "eleven", "twelve", "thirteen", "fourteen",
        "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"
    };

    const char *tens[] = {
        "", "", "twenty", "thirty", "forty",
        "fifty", "sixty", "seventy", "eighty", "ninety"
    };

    if (num < 20) {
        strcpy(output, ones[num]);
    } else {
        int t = num / 10;
        int o = num % 10;
        if (o == 0)
            strcpy(output, tens[t]);
        else
            sprintf(output, "%s-%s", tens[t], ones[o]);
    }
}

int main() {
    char output[50];
    int num;

    printf("Enter a number (0-99): ");
    scanf("%d", &num);

    if (num < 0 || num > 99) {
        printf("Out of range.\n");
        return 1;
    }

    numberToWords(num, output);
    printf("In words: %s\n", output);

    return 0;
}

