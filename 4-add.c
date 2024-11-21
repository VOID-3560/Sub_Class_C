//23-09-2024
#include <stdio.h>

int main()
{
    int result, a, b;
    result = (a = 10, b = 20, a + b);
    printf("The result of (a = 10 , b = 20 , a+b) is : %d ", result);
    return 0;
}