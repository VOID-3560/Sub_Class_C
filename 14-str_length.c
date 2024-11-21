// 7-11-24
// getting length of string
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int len;
    printf("Enter a string :");
    scanf("%99s", str);

    len = strlen(str);
    printf("The length of string is : %d", len);
    return 0;
}