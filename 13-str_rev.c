// 7-11-24
// string reverssal

#include <stdio.h>

int rev_str(char *str)
{
    int len = 0;
    char *start = str;
    char *end;
    char temp;

    // calcultate length of string
    while (str[len] != '\0')
    {
        len++;
    }

    // set end pointer
    end = str + len - 1;

    // swap charecter
    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main()
{
    char str[100];

    printf("Enter a string :");
    scanf("%99s", &str);
    printf("reversed string : %s \n ", str);
    return 0;
}