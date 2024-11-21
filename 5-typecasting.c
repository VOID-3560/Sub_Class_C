//24-09-2024
#include <stdio.h>

int main()
{
    int a = 5;
    int b = 2;
    int result_1;
    double result_2;
    double result_3;

    result_1 = (a / b);
    result_2 = (a / b);
    result_3 = (double)a / b;

    printf("result without typecast : %d\n", result_1);
    printf("result with typecast (double) : %.2f\n", result_2);  // Use %.2f for double
    printf("result with typecast to double : %.2f\n", result_3); // Use %.2f for double

    return 0;
}