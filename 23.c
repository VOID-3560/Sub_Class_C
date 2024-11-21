#include <stdio.h>


int main() {
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int (*ptr_1)[3] = matrix;

    // can int** be used to point to a int[][] array ?
    // address calc in row major order
    // in row major elements are stored in contiguous memory
    // Formula to calc the address of an element A[i][j]

    // i is row index 
    // j is column index

    // for column major 
    // Address(A[i][j]) = Base address + [(j x no of rows +i) x size of element]
    
    // i is row index 
    // j is column index  

    // Address(A[i][j][k]) = Base address + [(j x no of rows per plane x no of columns + (j x numbers of columns) + k) x size of element]  


    // no standard address formula for int ** as per storage order 
    // c sattic (contigous) arrays of any kind are stored linearly which is row major  

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", ptr_1[i][j]);  // two dimensional indexing 
        printf("\n");
    }

    return 0;
}


// Assignment
// Create generic address calculation formula for an N d array
// find the trace of a square matrix
// check if a matrix is symmtric 







         1-commands.c
         10-matrice_add.c
         11-mat_mult.c
         12-str_palin.c
         13-str_rev.c
         14-str_length.c
         15-ncr_calc.c
         16-word_count.c
         17-str_lib.c
         18-args_in_main.c
         19-dynamic_array_excample.c
         2-arrays_mod.c
         20-array_allocation.c
         21-memory_accessing.c
         22-more_on_memo_access.c
         23-actual_memory.c
         3-operators.c
         4-malloc.c
         5-demo_array.c
         6-static_array.c
         7-nest_ternary.c
         7-nov7.c
         8-nov7str.c
         9-transpose.c