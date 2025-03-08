#include<stdio.h>
int main(void)
{
	char str[20]={0};
	printf("Enter the string only Caps/Small\n");
	fgets(str,20,stdin);
	// Remove the newline character if present
	    for (int i = 0; str[i] != '\0'; i++) {
	        if (str[i] == '\n') {
	            str[i] = '\0';  // Replace newline with null terminator
	            break;
	        }
	    }


	if(str[0]>='A' && str[0]<='Z')for(int i=0;str[i]!='\0';i++)str[i]+=32;
	else for(int i=0;str[i]!='\0';i++)str[i]-=32;
	printf("%s\n",str);
	return 0;
}
/*

#include <stdio.h>

int main(void) {
    char str[20] = {0};

    printf("Enter the string (only uppercase/lowercase letters): ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character if present
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';  // Replace newline with null terminator
            break;
        }
    }

    // Toggle case based on the first character's case
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[0] >= 'A' && str[0] <= 'Z') {
            // Convert to lowercase if the first character is uppercase
            if (str[i] >= 'A' && str[i] <= 'Z') {
                str[i] += 32;  // Convert uppercase to lowercase
            }
        } else if (str[0] >= 'a' && str[0] <= 'z') {
            // Convert to uppercase if the first character is lowercase
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] -= 32;  // Convert lowercase to uppercase
            }
        }
    }

    printf("Modified string: %s\n", str);

    return 0;
}
*/
