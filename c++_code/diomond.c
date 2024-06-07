#include <stdio.h>
void diamond_pattern2(int n){

   for (int i = 0; i < n; i++)
   {
    for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }
      for (int j = 0; j < 2*i-1; j++)
        {
            printf("*");
        }   
       printf("\n"); 
   }

   for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < n - i ; j++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i -1; j++) {
            printf("*");
        }
        printf("\n"); 
    }


}
//  //////////////////////////////////////////////////////////////////////
void diamond_pattern(int n)
{ // top to down increasing *
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    // top to down decreasing *
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    diamond_pattern2(6);
    return 0;
}