// 7-11-24
// multiplication of two matrices

#include <stdio.h>
int add_matrices(int rows1, int cols1, int mat1[rows1][cols1], int rows2, int cols2, int mat2[rows2][cols2], int result[rows1][cols2])
{
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++)
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main()
{
    int rows1, cols1, rows2, cols2;

    printf("enter no of rows and columns of first matirx :");
    scanf("%d ,%d", &rows1, &cols1);

    printf("enter no of rows and columns of second matirx :");
    scanf("%d ,%d", &rows2, &cols2);

    if (cols1 != rows2)
    {
        printf("matrix multiplication not possible with given dimensions !!");
        return -1;
    }

    int mat1[rows1][cols1], mat2[rows2][cols2], result[rows1][cols2];

    printf("enter element of first matrix : \n");
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("enter element of second matrix : \n");
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    mulMatrices(rows1, cols1, mat1, rows2, cols2, mat2, result);

    printf("Result after multiplication :\n");
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            printf("%d", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}