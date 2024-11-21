#include <stdio.h>
#include <stdlib.h>
#include <string.h>


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


// int main(<subejct to change as per different types of c models>) {
int main(int argc, char *argv[]) {
    // char str[] = "Right to Left";

    if (argc != 2) {
        printf("Usage: %s <string_to_reverse>\n", argv[0]);
        return 1;
    }

    char* str = (char*) malloc(strlen(argv[1]) * sizeof(char));  // Allocating space for "world"
    if (str == NULL) {
        printf("Memory allocation for string failed!\n");
        return -1;
    }
    int i = 0;

    strcpy(str, argv[1]);

    printf("Original string: %s\n", str);
    reverse_string_without_library(str);

    return 0;
}
