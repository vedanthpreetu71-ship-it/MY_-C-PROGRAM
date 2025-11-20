#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100] = "";
    int i, len;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    // Reverse using strcat
    for (i = len - 1; i >= 0; i--) {
        char temp[2] = { str[i], '\0' };
        strcat(rev, temp);
    }

    if (strcmp(str, rev) == 0)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}

