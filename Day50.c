#include <stdio.h>

int main(void) {
    int row,col,i,j,sum=0;
    printf("\nEnter the no. of rows\n");
    scanf("%d",&row);
    printf("\nEnter the no. of columns\n");
    scanf("%d",&col);
    int arr[row][col];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\ninsert the element for %d,%d\n",i,j);
            scanf("%d",&arr[i][j]);
            sum+=arr[i][j];
        }
        
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
 printf("\nSum of all the elements -> %d",sum);
  return 0;
}
