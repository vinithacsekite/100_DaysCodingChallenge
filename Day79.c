#include <stdio.h>

int main(void) {
    int col,row,i,j,start,jstart;
    printf("\nEnter the no. of rows\n");
    scanf("%d",&row);
    printf("\nEnter the no. of columns\n");
    scanf("%d",&col);
    int arr[row][col];
    
    //getting elements:
    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
        {
            printf("\ninsert the element for %d,%d\n",i,j);
            scanf("%d",&arr[i][j]);
        }
        
    //original matrix:
        printf("\nThe matrix is\n");
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
                {
                    printf("%d ",arr[i][j]);
                }
                printf("\n");
        }
        
        
    //Result:
        printf("\nResult is ");
        printf("\n%d\n",arr[0][0]);
     //upper diagonal elements:
        for(i=1;i<row;i++) 
        {
            start=i;
             for(j=0;(j<=start);j++)
            {
               if(j<col)
                    printf("%d ",arr[i][j]);
                --i;
            }i=start;
            printf("\n");
        }
        
     //lower diagonal elements:
        i=row-1;
        start=i;
        for(j=1;j<col-1;j++)
        {
            jstart=j;
            while(j<=col-1)
            {
                 printf("%d ",arr[i][j]);
                i--;
                j++;
            }
            printf("\n");
            i=start;
            j=jstart;
        }
        printf("%d",arr[row-1][col-1]);
        
  return 0;
}
