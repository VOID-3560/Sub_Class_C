// 21 - 10 - 2024

#include <stdio.h>

int main()
{
    int num[5] = {10, 20, 30, 40, 50}; // initialisation of a array
    // linear data structure

    // accessing and printing array element
    // printf("the first element is : %d \n", num[0]);
    // printf("the second element is : %d \n", num[1]);
    // printf("the third element is : %d \n", num[2]);

    for (int i = 0; i < 5; i++) // used to iterate across the array or in other words accessing the elements of the arrays
    {
        printf("the element at index %d is : %d \n", i, num[i]);
        printf("address of the element at index %d is : %p \n", i, &num[i]);
    }

    num[2] = 100; // elements of an array can be easily modified by substitution
    printf("the modified third element is : %d \n", num[2]);

    // making a two 2 matrice or a 2d array
    int matrix[2][3] = {// initialisation of a 2 dimensinal array
                        {1, 2, 3},
                        {4, 5, 6}};

    // printf("element at [0][1] : %d \n", matrix[0][1]);  manual access of elements
    // printf("element at [1][2] : %d \n", matrix[1][2]);

    // accessing the elements of an array using for loop
    for (int i = 0; i < 2; i++) // determines iteration through a row
    {
        for (int j = 0; j < 3; j++) // traversing through the columns of the matrice
        {
            printf("element at [%d][%d] : %d \n", i, j, matrix[i][j]); // accesisng the elements
        }
    }

    printf("\n");
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 2; i++)
        {

            printf("element at [%d][%d] : %d \n", i, j, matrix[i][j]);
        }
    }
    // how would you verify that arrays are stored in row major???
    // answer is that we can print the address of the assigned values and it is clear from th memory allocation that that c stores the matrice data in form of row major

    
    // address of the element at index 0 is : 0061FEF8
               // the element at index 1 is : 20
    
    // address of the element at index 1 is : 0061FEFC
               // the element at index 2 is : 30
    
    // address of the element at index 2 is : 0061FF00
               // the element at index 3 is : 40
    
    // address of the element at index 3 is : 0061FF04
               // the element at index 4 is : 50
    // address of the element at index 4 is : 0061FF08

    // logical vs physical storage issues
    // row major    |1|2|3|4|5|6|
    // column major |1|4|2|5|3|6|
    // c or c++ follows row major

    // const char* hex_add = "0x7fff65b6da80";
    // long decimal_address = strtol(hex_add , NULL , 16);

    //  doubt !!  strol is used to convert a string to a long integer. The name strtol stands for string to long. 
    //  This function is useful when you need to interpret a numeric value stored as a string and convert it to an integer format for calculations.

    return 0;
}