#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Function to check if the given string belongs to the language defined by the CFG
bool belongsToLanguage(char *str) {
    int len = strlen(str);
    int i = 0, j = len - 1;

    while (i <= j) {
        if (str[i] != str[j] || (str[i] != '0' && str[i] != '1'))
            return false;
        i++;
        j--;
    }
    return true;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    if (belongsToLanguage(str))
        printf("The string belongs to the language defined by the CFG.\n");
    else
        printf("The string does not belong to the language defined by the CFG.\n");

    return 0;
}

