#include <stdio.h>

int main(void) {
  int i,j,sum=0,row,col;
  printf("\nEnter the no. of rows\n");
  scanf("%d",&row);
  printf("\nEnter the no. of columns\n");
  scanf("%d",&col);
  if(row != col )
        printf("\nMake sure your input matrix should be in nxn format\n");
 else{
  
  int arr[row][col];
  for(i=0;i<row;i++)
    for(j=0;j<col;j++)
    {
        printf("\ninsert the element for %d,%d\n",i,j);
        scanf("%d",&arr[i][j]);
    }
    printf("\nThe matrix is\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d",arr[i][j]);
        }
    printf("\n");
    }
    
    printf("\nDiagonal elements are->");
    
        
    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
        {
            if(i==j)
            {
                printf("%d,",arr[i][j]);
                sum+=arr[i][j];
            }
        }
        j=col-1;
        i=0;
    //reverse diagonal values:
   while(i<row && j>0)
   {
        printf("%d,",arr[i][j]);
         sum+=arr[i][j];
        ++i;--j;
       
   }
   printf("%d",arr[i][0]);
    sum+=arr[i][0];
   printf("\nSum of all the elements ->%d",sum);
    }
    
  return 0;
}
