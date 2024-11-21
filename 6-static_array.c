// 4-11-24

#include <stdio.h>
#include <stdlib.h>

// Function to demonstrate static and dynamic int arrays
int handle_int_array()
{
    printf("\n--- Handling Integer Array ---\n");

    // Static int array
    int static_int_array[5] = {1, 2, 3, 4, 5};
    printf("Static int array values:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", static_int_array[i]);
    }
    printf("\n");

    // Dynamic int array
    int *dynamic_int_array = (int *)malloc(5 * sizeof(int));
    if (dynamic_int_array == NULL)
    {
        printf("Memory allocation failed!\n");
        return -1;
    }

    for (int i = 0; i < 5; i++)
    {
        dynamic_int_array[i] = i + 6; // Initialize values starting from 6
    }

    printf("Dynamic int array values:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", dynamic_int_array[i]);
    }
    printf("\n");

    return 0;
}
// Funtion to demonstrate static and dynamic float arrays
int handle_float_array()
{
    printf("---Handling Float Array---");

    // static array
    float static_float_array[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    printf("static float array values: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%.1f", static_float_array[i]);
    }
    printf("\n");

    float *dynamic_float_array = (float *)malloc(5 * sizeof(float));
    if (dynamic_float_array == NULL)
    {
        printf("memory alloc failed !!");
        return -1;
    }
    for (int i = 0; i < 5; i++)
    {
        dynamic_float_array[i] = (i + 6) * 1.1f;
    }

    printf("dynamic float array value \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%.1f", dynamic_float_array[i]);
  }
    printf("\n");

    // free the dynamic array
    free(dynamic_float_array);
    return 0;
}

// Funtion to demonstrate static and dynamic char arrays
int handle_char_array()
{
    printf("---Handling char Array---");

    // static char array
    char static_char_array[6] = "hello";
    printf("static char array values: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%.c", static_char_array[i]);
    }
    printf("\n");

    char *dynamic_char_array = (char *)malloc(5 * sizeof(char));
    if (dynamic_char_array == NULL)
    {
        printf("memory alloc failed !!");
        return -1;
    }



    // solution - strcpy(dynamic_char_array , "hello")

    // is it  possible to directly initialise a charecter array whos memory is dynaically allocated if yes then how does it differ from static_char_array
    // why it is not possible
    // dynamic_char_array = "hello\0";

    // this line does not copy content of hello into dynamically allocated memory . 
    // instead makes dynamic_char_array point to a string literal hello stored in read only section of memory. this causes two errors.
    // 1. memory leak 
    // 2. invalid free 


    dynamic_char_array[0] = 'w';
    dynamic_char_array[1] = 'o';
    dynamic_char_array[2] = 'r';
    dynamic_char_array[3] = 'l';
    dynamic_char_array[4] = 'd';
    dynamic_char_array[5] = '\0';

    printf("dynamic char array values :%s\n", dynamic_char_array);

    // free the dynamic array
    free(dynamic_char_array);
    return 0;
}


// Funtion to demonstrate static and dynamic fdouble arrays
int handle_double_array()
{
    printf("---Handling Fdouble Array---");

    // static double array
    double static_double_array[6] = {1.11, 2.22, 3.33, 4.44, 5.55};
    printf("static double array values: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%.2lf", static_double_array[i]);
    }
    printf("\n");

    double *dynamic_double_array = (double *)malloc(5 * sizeof(double));
    if (dynamic_double_array == NULL)
    {
        printf("memory alloc failed !!");
        return -1;
    }

    for (int i = 0; i < 5; i++)
    {
        dynamic_double_array[i] = (i + 6) * 1.11;
    }

    printf("dynamic double array value \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%.1f", dynamic_double_array[i]);
    }
    printf("\n");

    // free the dydouble array
    free(dynamic_double_array);
    return 0;
}

int main()
{
    handle_int_array();
    handle_float_array();
    handle_char_array();
    handle_double_array();
}