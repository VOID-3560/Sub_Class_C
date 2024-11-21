#include <stdio.h>


int get_string_length(const char* str) {

    int length = 0;

    while (str[length] != '\0') {
        length++;
    }

    return length;
}

int reverse_string_without_library(char* str) {

    int len = get_string_length(str);

    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    printf("Reversed string without library function: %s\n", str);

    return 1;
}

int main() {
    char str[] = "Right to Left";

    printf("Original string: %s\n", str);
    reverse_string_without_library(str);

    return 0;
}

// Assignment - Use XOR swapping for string reversal
