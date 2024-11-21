// 21 - 10 - 2024

#include <stdio.h>

#define MAX 500 // Max digits that can be handled




// Function to multiply x with the number represented by res[]
int multiply(int x, int res[], int res_size)
{
    int carry = 0; // Initialize carry

    // Multiply x with each digit and update res[]
    for (int i = 0; i < res_size; i++)
    {
        int prod = res[i] * x + carry;
        res[i] = prod % 10; // Store the last digit
        carry = prod / 10;  // Put the rest in carry
    }

    // Handle remaining carry
    while (carry)
    {
        res[res_size] = carry % 10;
        carry = carry / 10;
        res_size++;
    }

    return res_size;
}



// Function to calculate factorial
void factorial(int n)
{
    int res[MAX];

    // Initialize result as 1
    res[0] = 1;
    int res_size = 1;

    // Apply factorial formula n! = 1 * 2 * 3 * ... * n
   for (int x = 2; x <= n; x++)
    {
        res_size = multiply(x, res, res_size);
    }
    // Print the result in reverse order
    printf("Factorial of %d is: ", n);
    for (int i = res_size - 1; i >= 0; i--)
    {
        printf("%d", res[i]);
    }
    printf("\n");
}

 


int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    factorial(num);
    return 0;
}