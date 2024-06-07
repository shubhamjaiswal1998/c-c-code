#include <stdio.h>  
  
int main(void) {  
  int n,m;  
  printf("Enter the number");  
  scanf("%d",&m);  
 // m=2*n-1;  
  for(int i=0;i<=m;i++)  
  {  
    for(int j=0;j<=m;j++)  
    {  
       if(i==j || j==(m-i+1) || i==0 || j==m || i==m|| j==0)  
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
  return 0;  
}  