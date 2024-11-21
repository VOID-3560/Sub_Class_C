// 7-11-24
// c prog to add 2d matrices

#include <stdio.h>
int add_matrices(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols], int result[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}
int main()
{
    int rows, cols;
    printf("enter number of rows and columns :");
    scanf("%d , %d", &rows, &cols);

    int mat1[rows][cols], mat2[rows][cols], result[rows][cols];

    printf("enter elements of first matrix : \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("enter elements of second matrix : \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    addmatrices(rows, cols, mat1, mat2, result);

    printf("Result of addition :\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d", result[i][j]);
        }
        printf("\n");
    }
}
