#include<stdio.h>
 int i,j,n;
 void pattern(int ,int);


int main()
{
 
  scanf("%d",&n);
   for(i=1;i<=n;i++)   // for each line
   {
 
    /** first part code:
    0    
    01    
    010  
    0101  
    01010
    */
    for(j=1;j<=n;j++)
    {
      if(j<=i)
      {
          if(j%2!=0)
            printf("0");
          else
            printf("1");
      }
        
      else
        printf(" ");
    }
    
    /** second part code:
        0
      01
      010 
     0101 
    01010
    */
     int flag=0;
    for(j=n;j>=1;j--)
    {
      if(j<=i)
      {
          if(flag==0)
          {
            printf("0");
            flag=1;
          }
          else
          {
            printf("1");
            flag=0;
          }
      }
      else
        printf(" ");
        } 
    printf("\n");
  }
  return 0;
}
