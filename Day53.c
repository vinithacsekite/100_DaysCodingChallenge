#include <stdio.h>

int main(void) {
    int row,col,i,j,count=0;
    printf("\nEnter the no. of rows\n");
    scanf("%d",&row);
    printf("\nEnter the no. of columns\n");
    scanf("%d",&col);
    int arr[row][col];
    
    //getting elements and calculating zero count:
    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
        {
            printf("\ninsert the element for %d,%d",i,j);
            scanf("%d",&arr[i][j]);
            if(arr[i][j] ==0 )
                ++count;
        }
        
        //printing the elements:
        printf("\nThe matrix is");
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
        
        //condition for sparse matrix:
        if(count>= ((row*col)/2))
            printf("\nThe given matrix is a sparse matrix.");
        else
            printf("\nThe given matrix is not a sparse matrix.");
        
  
  return 0;
}
