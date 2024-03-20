#include <stdio.h>
#include <string.h>

int checkString(const char *word) {
    size_t len = strlen(word);

    if (len == 0) {
        return 0;
    }

    if (word[0] != 'a') {
        return 0;
    }

    if (word[len - 1] != 'a') {
        return 0;
    }

    return 1;
}

int main() {
    char word[100];

    printf("Enter a word: ");
    fgets(word, sizeof(word), stdin);

    // Remove newline character from the input
    word[strcspn(word, "\n")] = '\0';

    if (checkString(word)) {
        printf("The input string starts with 'a' and ends with 'a'.\n");
    } else {
        printf("The input string does not start with 'a' or does not end with 'a'.\n");
    }

    return 0;
}
