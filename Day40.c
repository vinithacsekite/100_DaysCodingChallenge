#include <stdio.h>

int main(void) {
  int n;
  scanf("%d",&n);
  for(int i = n-1;i>=0;i--)
  {
        for(int j =0;j<n;j++)
        {
          if(j<=i)     
            printf("* ");
          else 
            printf("  ");
        }
        for(int j =n-1;j>=0;j--)
        {
          if( i <j)    
            printf("  ");
          else 
            printf(" *");
        }
        printf("\n");
  }
  
  
  //reverse
  for(int i = 0;i<n;i++)
  {
        for(int j =0;j<n;j++)
        {
          if( i >=j)          
          printf("* ");
          else
          printf("  ");
        }
        for(int j =n-1;j>=0;j--)
        {
          if( i <j)             
          printf("  ");
          else 
          printf(" *");
        }
        printf("\n");
  }
  
  return 0;
}
