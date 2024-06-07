#include <stdio.h>
void user_input(){
  int arr[3][3];
  for (int i = 0; i <3; i++)
  {
    for (int j = 0; j < 3; j++)
    {  printf("enter valu");
        scanf("%d",&arr[i][j]);
    }
    
  }
  
   for (int i = 0; i <3; i++)
  {
    for (int j = 0; j < 3; j++)
    {  
        printf("%d%s",arr[i][j]," ");
    }
    printf("\n");
  }
  



}
//////////////////////////////////////////////////////////////////////////////
int mul(int arr1[][3], int arr2[][3], int size, int res[][3])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            res[i][j] = 0;
            for (int k = 0; k < size; k++)
            {
                res[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
}
/// ////////////////////////////////////////////////////////////////////
int add(int arr1[][3], int arr2[][3], int size, int res[][3])
{    
      
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            res[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}
/////////////////////////////////////////////////////////////////////////
void print(int arr[][3], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d%s", arr[i][j], " ");
        }
        printf("\n");
    }
}

///  /////////////////////////////////////////////////
void input(int arr[][3],int size){
  
   for (int i = 0; i < size; i++)
   {
    
    for (int j = 0; j < size; j++)
    {
        scanf("%d",&arr[i][j]);  
    }
    
   }

}
int main()
{
/*
    int arr1[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
    int arr2[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
    int size = 3;
    print(arr1, size); 
    int resultadd[3][3];
    add(arr1, arr1, size, resultadd);
    print(resultadd, size);
    int blank_arr[3][3];
    input(blank_arr,3);
    print(blank_arr,3);

    // ///////////////////////////////////////////////////////////////
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
    
    ////////////////////////////////////////////////////////////////////
    int matrix2[3][3] = {
        {1, 2, 3}, // 1st row 3 column
        {4, 5, 6}, // 2nd row 3 column
        {7, 8, 9}, // 3rd row 3 column
    };
    int size2 = sizeof(matrix2) / sizeof(matrix2[0]);
    printf("\n");
    printMatrix(matrix2,3,3);*/
    user_input();
    return 0;
}