#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Function to check if the given string belongs to the language defined by the CFG
bool belongsToLanguage(char *str) {
    if (str[0] == '1') {
        // If the first character is '1', it should follow the production A ? 1A | e
        if (str[1] != '\0' && str[1] == '1')
            return belongsToLanguage(str + 1);
        else if (str[1] == '\0')
            return true; // If the string ends after '1', it belongs to the language
    } else if (str[0] == '0') {
        // If the first character is '0', it should follow the production S ? 0S0
        int len = strlen(str);
        if (len >= 3 && str[len - 1] == '0')
            return belongsToLanguage(str + 1);
    }
    return false; // If none of the conditions are met, the string does not belong to the language
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

