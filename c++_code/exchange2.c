#include <stdio.h>
#include <math.h>
//#include <string.h>
#include<ctype.h>
int compareStrings(char s1[], char s2[]) {
    // Iterate through characters in both strings
    for (int i = 0; s1[i] != '\0' && s2[i] != '\0'; i++) {
        
        char c1 = tolower(s1[i]);
        char c2 = tolower(s2[i]);

        // Compare characters
        if (c1 < c2) {
            return -1;
        } 
        else if (c1 > c2) {
            return 1;
        }
    }

    // If the loop completes, the strings are equal
    return 0;
}
// /////////////////////////////////////////////////////////////////////
void hollow_Parlleogram(int rows, int cols)
{
   int i, j;

   for (i = 1; i <= rows; i++)
   {

      // 1st Printing spaces thens
      for (j = 1; j < i; j++)
      {
         printf(" ");
      }

      // Printing hollow parallelogram
      for (j = 1; j <= cols; j++)
      {

         if (i == 1 || i == rows || j == 1 || j == cols)
         {
            printf("*");
         }
         else
         {
            printf(" ");
         }
      }

      printf("\n");
   }
}
void hollow_squre(int n)
{
   for (int i = 0; i <= n; i++)
   {
      for (int j = 0; j <= n; j++)
      {
         if (i == 0 || j == 0 || i == n || j == n || j == (n / 2) || i == (n / 2))
         {
            printf("*");
         }
         else
         {
            printf(" ");
         }
      }
      printf("\n");
   }
}
void exchange_i_j()
{
   int number = 3246159;
   int c = 7;
   int i = 2;
   int j = 5;
   int p_i = pow(10, c - i - 1);
   int p_j = pow(10, c - j - 1);
   int d_i = (number / p_i) % 10;
   int d_j = (number / p_j) % 10;
   int r = number - d_i * p_i + d_j * p_i - d_j * p_j + d_i * p_j + 1;
   printf("%d", r);
   printf("\n");
}
int main()
{
   //exchange_i_j(3256149);
   //hollow_squre(6);
   //hollow_Parlleogram(8, 8);

   char s1[101], s2[101];
    scanf("%s", s1);
    scanf("%s", s2);

    // Output
    int r = compareStrings(s1, s2);

    printf("%d\n", r);


   return 0;
}