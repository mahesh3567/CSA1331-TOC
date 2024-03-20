#include <stdio.h>
#include <string.h>
#include <ctype.h>

int checkString(const char *word) {
    if (strlen(word) != 3) {
        return 0;
    }

    if (word[0] != '0') {
        return 0;
    }

    int i;
    for (i = 0; i < 2; i++) {
        if (word[i+1] == '0' || word[i+1] == '1') {
            continue;
        } else {
            return 0;
        }
    }

    if (word[2] != '1') {
        return 0;
    }

    return 1;
}

int main() {
    char word[100];

    printf("Enter a string: ");
    scanf("%s", word);

    if (checkString(word)) {
        printf("The input string belongs to the language defined by the CFG.\n");
    } else {
        printf("The input string does not belong to the language defined by the CFG.\n");
    }

    return 0;
}
