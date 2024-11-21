// 7-11-24
// palindrome check
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ispalin(char *str)
{
    int len = strlen(str);
    int start = 0;
    int end = len - 1;

    while (start < end)
    {
        if (tolower(str[start]) != tolower(str[end]))
        {
            return 0; // not a palindrome
        }
        start++;
        end--;
    }
    return 1; // is a palindrome
}

int main()
{
    char str[100];

    printf("Enter a string :");
    scanf("%99s", str);

    if (ispalin(str))
    {
        printf("The string is a palindrome!!");
    }
    else
    {
        printf("string given is not a palindrom");
    }
    return 0;
}
