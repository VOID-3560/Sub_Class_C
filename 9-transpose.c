// 7-11-2024 assigment

// write a function to transpose a matrice with given cases
// 1. without changing the original matrix 
// 2. after changing the original matrix

#include <stdio.h>
#include <stdlib.h>

int disp_Mat(int **matrix, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int **trsp_no_change(int **matrix, int rows, int cols)
{
    int **transp = (int **)malloc(cols * sizeof(int *));
    for (int i = 0; i < cols; i++)
    {
        transp[i] = (int *)malloc(rows * sizeof(int));
        for (int j = 0; j < rows; j++)
        {
            transp[i][j] = matrix[j][i];
        }
    }
    return transp;
}

int trsp_change(int **matrix, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}

int main()
{
    int rows = 3, cols = 3;

    
    int **matrix = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++)
    {
        matrix[i] = (int *)malloc(cols * sizeof(int));
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = i * cols + j + 1;
        }
    }

    printf("Original Matrix:\n");
    disp_Mat(matrix, rows, cols);

    int **transposed_Matrix = trsp_no_change(matrix, rows, cols);

    printf("\n  Transposed Matrix {orignal untouched}: \n");
    disp_Mat(transposed_Matrix, cols, rows);

    trsp_change(matrix, rows); 

    printf("\n  transposed matrix {changing orignal}: \n");
    disp_Mat(matrix, rows, cols);

    
    
    // free allocation
    for (int i = 0; i < rows; i++)
    {
        free(matrix[i]);
    }
    free(matrix);

    for (int i = 0; i < cols; i++)
    {
        free(transposed_Matrix[i]);
    }
    free(transposed_Matrix);

    return 0;
}