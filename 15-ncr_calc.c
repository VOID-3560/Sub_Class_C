// 7-11-24
// computing ncr valuue

#include <stdio.h>

unsigned long long fact(int num)
{
    unsigned long long fact = 1;
    for (int i = 0; i < num; i++)
    {
        fact *= i;
    }
    return fact;
}
unsigned long long ncr(int n, int r)
{
    if (r > n)
    {
        return 0;
    }
    return fact(n) / (fact(r) * fact(n - r));
}
int main()
{
    int n, r;
    unsigned long long result;
    printf("enter the value of n :");
    scanf("%d", &n);
    printf("enter the value of r :");
    scanf("%d", &r);

    if (r > n || r < 0)
    {
        printf("invalid inputs !!");
        return 1;
    }
    result = ncr(n, r);

    printf("%d C %d = %llu \n", n, r, result);
    return 0;
}
