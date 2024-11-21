// 7-11-24

#include <stdio.h>
#include <stdlib.h>

int **create_2d_array(int rows, int cols)
{
    int **array = (int **)malloc(rows * sizeof(int));
    for (int i = 0; i < rows; i++)
    {
        array[i] = (int *)malloc(cols * sizeof(int));
        for (int j = 0; j < cols; i++)      // initiaiton of array
        {                                   // initiaiton of array
            array[i][j] = i * cols + j + 1; // initiaiton of array
        } // initiaiton of array
    }
    return array;
}

int print_sum_rows_and_columns(int **matrix, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    // rows
    {
        int row_sum = 0;
        for (int j = 0; j < cols; j++)
        {
            row_sum += matrix[i][j];
        }
        printf("sum of rows %d : %d", i, row_sum);
    }

    // columns
    for (int j = 0; j < cols; j++)
    {
        int cols_sum = 0;
        for (int i = 0; i < rows; i++)
        {
            cols_sum += matrix[i][j];
        }
        printf("sum of cols %d : %d", j, cols_sum);
    }
}

int **multiply_matrices(int **matA, int **matB, int rowsA, int colsA, int colsB)
{

    int **result = (int **)malloc(rowsA * sizeof(int *));

    for (int i = 0; i < rowsA; i++)
    {

        result[i] = (int *)calloc(colsB, sizeof(int));
        for (int j = 0; j < colsB; j++)
        {
            for (int k = 0; k < colsA; k++)
            {
                result[i][j] += matA[i][k] * matB[k][j];
            }
        }
    }

    return result;
}

int **transpose_matrix(int **matrix, int rows, int cols)
{
    int **transpose = (int **)malloc(cols * sizeof(int *));
    for (int i = 0; i < cols; i++)
    {
        transpose[i] = (int *)malloc(rows * sizeof(int));
        for (int j = 0; j < rows; j++)
        {
            transpose[i][j] = matrix[j][i];
        }
    }

    return transpose;
}

int free_matrix(int **matrix, int rows)
{
    for (int i = 0; i < rows; i++)
    {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}

int print_matrix(int **matrix, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
int main()
{

    int **matA = create_matrix(2, 3);
    int **matB = create_matrix(3, 2);
    int **result = multiply_matrices(matA, matB, 2, 3, 2);

    print_matrix(matA, 2, 3);
    print_matrix(matB, 3, 2);

    printf("Resulting Matrix:\n");
    print_matrix(result, 2, 2);

    free_matrix(matA, 2);
    free_matrix(matB, 3);
    free_matrix(result, 2);

    return 0;
}

int main2() {

    int rows = 3, cols = 3;
    int** matrix = allocate_2d_array(rows, cols);
    int** transpose = transpose_matrix(matrix, rows, cols);

    printf("Original Matrix:\n");
    print_matrix(matrix, cols, rows);

    printf("Transposed Matrix:\n");
    print_matrix(transpose, cols, rows);

    deallocate_2d_array(matrix, rows);
    deallocate_2d_array(transpose, cols);

    return 0;
}
// dangling pointers : litral hanging pointers
// the free function is to remove the pointer hook
