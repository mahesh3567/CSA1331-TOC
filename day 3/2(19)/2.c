#include <stdio.h>
#include <string.h>

int checkString(const char *word) {
    size_t len = strlen(word);

    if (len < 2) {
        return 0;
    }

    if (word[0] != '0') {
        return 0;
    }

    if (word[len - 1] != '1') {
        return 0;
    }

    return 1;
}

int main() {
    char word[100];

    printf("Enter a binary string: ");
    scanf("%s", word);

    if (checkString(word)) {
        printf("The input string starts with '0' and ends with '1'.\n");
    } else {
        printf("The input string does not start with '0' or does not end with '1'.\n");
    }

    return 0;
}
