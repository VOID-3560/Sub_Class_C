// 21-10-24

#include <stdio.h>
#include <limits.h>

long long int get_factorial(int num)
{
    long long int fact = 1 , i = 1;
    do{
        fact *= i;
        i++;
    }while(i<=num);
    printf("factorial of %d is : %d", num, fact);

}

long long int main()
{
    int num;
    printf("Enter a num to find its factorial :");
    scanf("%d", &num);
    get_factorial(num);
    // do {
    //     factorial *= i;
    //     i++;

    // }while(i<=num);
    // exit control loop
    // the other two loops are example of entry control loop

    
    return 0;
}


// calculate uptill the point when the result stored in the variable exceeds the max limit as dictated by INT_MAX