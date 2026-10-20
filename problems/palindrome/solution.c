#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    char clean[1000];
    int len = 0;

    if (!fgets(str, sizeof(str), stdin)) {
        return 0;
    }

    // Keep only alphanumeric characters and convert uppercase to lowercase
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalnum(str[i])) {
            clean[len++] = tolower(str[i]);
        }
    }

    // Check if clean string reads the same forwards and backwards
    int is_palindrome = 1;
    for (int i = 0; i < len / 2; i++) {
        if (clean[i] != clean[len - 1 - i]) {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
