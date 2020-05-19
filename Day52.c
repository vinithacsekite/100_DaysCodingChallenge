#include <stdio.h>

int main(void) {
  int i,j,row,col;
  printf("\nEnter the no. of rows\n");
  scanf("%d",&row);
  printf("\nEnter the no. of columns\n");
  scanf("%d",&col);
  if(row ==3 && col ==3 )
  {
       int arr[row][col];
  for(i=0;i<row;i++)
    for(j=0;j<col;j++)
    {
        printf("\ninsert the element for %d,%d\n",i,j);
        scanf("%d",&arr[i][j]);
    }
    
    //print the original matrix:
    printf("\nThe matrix is\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(j==col-1)
                printf("%d",arr[i][j]);
            else
            printf("%d\t",arr[i][j]);
        }
    printf("\n");
    }
    
    //main diagonal:
    printf("\nMain Diagonal elements are ->");
  for(i=0;i<row;i++)
        for(j=0;j<col;j++)
        {
            if(i==j && j==col-1)
                 printf("%d",arr[i][j]);
            else if(i==j)
                printf("%d,",arr[i][j]);
        }
        j=col-1;
        i=0;
        
        
        
    //reverse diagonal values:
    printf("\nSecondary Diagonal elements are ->");
   while(i<row && j>0)
   {
        printf("%d,",arr[i][j]);
        ++i;--j;
        }
   printf("%d",arr[i][0]);
  
  
  //After interchange:
  printf("\nAfter interchange,the final matrix is\n");
   for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i==0 && j==0)
                printf("%d\t",arr[0][2]);
            else if(i==row-1 && j == col-1)
                 printf("%d",arr[2][0]);
            else if(j==col-1)
                printf("%d",arr[i][j]);
            else
            printf("%d\t",arr[i][j]);
        }
    printf("\n");
    }
   
  }    
 else{
  
     printf("\nMake sure your input matrix should be in 3x3 format\n");
    }
    
  return 0;
}
