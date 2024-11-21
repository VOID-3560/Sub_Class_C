//24-09-2024

// = represent a binary operation
// const int var_name = 1 ; forced to become a constant
// variable = variable / constant
// a + b =    can be a variable or a constant
// short and operators is combination of arithematic and assignment operator

// preincrementation is used if we want to use the value after modification
// postincrementation is used if we want to use the value before modification
//  ternary  operator

// (a>b) ? a:b;

// assignent
#include <stdio.h>

int main()
{
    int result,a,b,c,d;

    printf("enter a : ");
    scanf("%d",&a);
    printf("enter b : ");
    scanf("%d",&b);
    printf("enter c : ");
    scanf("%d",&c);
    printf("enter d : ");
    scanf("%d",&d);

    // if (a > b)
    // {
    //     if (c > d)
    //     {
    //         result = c;
    //     }
    //     else if (c == d)
    //     {
    //         result = (c + d) / 2;
    //     }
    //     else
    //     {
    //         result = d;
    //     }
    // }
    // else if (a == b)
    // {
    //     result = 2;
    // }
    // else
    // {
    //     if (c > d)
    //     {
    //         result = a + b;
    //     }
    //     else if (c == d)
    //     {
    //         result = (a - b) / 2;
    //     }
    //     else
    //     {
    //         result = 2;
    //     }
    // }
    // convert to ternary
    result = (a>b)?((c>d)?c:(c==d)?(c+d)/2:d):(a==b)?2:(((c>d)?a+b:(c==d)?(a-b)/2:2));
        printf("result is : %d", result);

    return 0;
}


// size of operator 
// variable_name()   is considered as a function 
// but sizeof() is an operator not a
// size of is used in genaral programs which we do not know on what architechture they are going to run 

//POINTERS
//dereference *p
//reference &p
//by default it will point to some value
//int *p = &a