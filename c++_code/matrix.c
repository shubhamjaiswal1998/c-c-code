#include <stdio.h>

void transepose(int arr[][3], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            arr[i][j] = arr[j][i];
        }
    }
}
/////////////////////////////////////////////////////////////////////////////
void printMatrix(int matrix[][3], int rows, int cols)
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
//////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int matrix[4][3] = {
        {1, 2, 3},  // 1st row 3 column
        {4, 5, 6},  // 2nd row 3 column
        {7, 8, 9},  // 3rd row 3 column
        {7, 8, 9}}; // 4th row  3 column
    printf("%d%s", sizeof(matrix), "\n");
    printf("%d%s", sizeof(matrix[0]), "\n");
    printf("%d%s", sizeof(matrix[0][0]), "\n");

    int rows = sizeof(matrix) / sizeof(matrix[0]);       // 12element*4=48/12=4
    int cols = sizeof(matrix[0]) / sizeof(matrix[0][0]); // 3element*4=12/4=3
    printMatrix(matrix, rows, cols);
    ////////////////////////////////////////////////////////////////////
    int matrix2[3][3] = {
        {1, 2, 3}, // 1st row 3 column
        {4, 5, 6}, // 2nd row 3 column
        {7, 8, 9}, // 3rd row 3 column
    };
    int size2 = sizeof(matrix2) / sizeof(matrix2[0]);
    printf("\n");
    printMatrix(matrix2,3,3);

    transepose(matrix2,size2);
    printf("after tranpose matrix\n");

    printMatrix(matrix2,3,3);

    return 0;
}