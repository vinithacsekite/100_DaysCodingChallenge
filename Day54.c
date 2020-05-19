#include <stdio.h>

int main(void) {
    int row,col,i,j,sum=0;
    printf("\nEnter the no. of rows\n");
    scanf("%d",&row);
    printf("\nEnter the no. of columns\n");
    scanf("%d",&col);
    int arr[row][col];
    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
        {
            printf("\ninsert the element for %d,%d\n",i,j);
            scanf("%d",&arr[i][j]);
        }
        
        //printing given matrix:
    printf("\nThe matrix is\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(j== col-1)
                printf("%d",arr[i][j]);
            else
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    
    //Adding rows:
     for(i=0;i<row;i++)
     {
        sum=0;
        for(j=0;j<col;j++)
            {
                sum+=arr[i][j];
            }
            printf("Sum of row%d->%d",i+1,sum);
     }
    
    //Adding columns:  
    for(i=0;i<row;i++)
     {
        sum=0;
        for(j=0;j<col;j++)
            {
                sum+=arr[j][i];
            }
            printf("Sum of column%d->%d",i+1,sum);
     }  
    
  
  return 0;
}
