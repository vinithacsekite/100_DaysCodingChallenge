26#include <stdio.h>

int main(void) {
    
    int i, j,m,n;
    int left, top,temp;
    int board[5][5]; 
    printf("\nEnter the no. of rows\n");
    scanf("%d",&m);
     printf("\nEnter the no. of columns\n");
    scanf("%d",&n);
     left = 0;
    top  = m - 1;
    
    //getting values:
    for( i=0;i<m;i++)
        for( j=0;j<m;j++)
            {
                printf("\ninsert the element for %d,%d\n",i,j);
                scanf("%d",&board[i][j]);
            }
            
   //printing the original matrix:         
    printf("\nThe matrix is\n");
   for ( i = 0; i < m; i++) 
    { 
        for ( j = 0; j < m; j++) 
            printf("%2d ", board[i][j]); 
  
        printf("\n"); 
    } 
    printf("\n"); 
 

  
        //Rotating loop:
    for(i=1; i<=m/2; i++, left++, top--)
    {
        // top row
        temp=board[left][left];
        for(j=left; j<top; j++)
          board[left][j]=board[left][j+1];
        // right column
        for(j=left+1; j<=top; j++)
             board[j-1][top]=board[j][top];
        // down row
        for(j=top; j>left; j--)
            board[top][j] =board[top][j-1];
       // left column
        for(j=top; j>left+1; j--)
        {
            board[j][left] =board[j-1][left];
        }
            board[j][left]=temp;
    }
    
    
    //output matrix:
    printf("\nAnti-clockwise Rotation output is\n");
    for (int i = 0; i < m; i++) 
    { 
        for (int j = 0; j < m; j++) 
            printf("%2d ", board[i][j]); 
  
        printf("\n"); 
    } 
    printf("\n"); 
  return 0;
}
