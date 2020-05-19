#include <stdio.h>

int main(void) {
   int i, j, N,M,left,top;
   printf("\nEnter the no. of rows\n");
    scanf("%d",&M);
     printf("\nEnter the no. of columns\n");
    scanf("%d",&N);
     int board[M][N];
     left = 0;
    top  = M - 1;
    
    //getting values:
    for( i=0;i<M;i++)
        for( j=0;j<M;j++)
            {
                printf("\ninsert the element for %d,%d\n",i,j);
                scanf("%d",&board[i][j]);
            }
     
     //printing the original matrix:         
    printf("\nThe matrix is\n");
   for ( i = 0; i < M; i++) 
    { 
        for ( j = 0; j < M; j++) 
            printf("%2d ", board[i][j]); 
  
        printf("\n"); 
    } 
    printf("\n"); 

    
        // Fill from left to right
        for(j=left; j<=top; j++)
        {
            board[left][j] = 0;
        }

        // Fill from top to down
        for(j=left+1; j<=top; j++)
        {
            board[j][top] = 0;
        }

        // Fill from right to left
        for(j=top-1; j>=left; j--)
        {
            board[top][j] = 0;
        }

        // Fill from down to top
        for(j=top-1; j>=left+1; j--)
        {
            board[j][left] = 0;
        }
 

    // Print the pattern
    printf("\nResult is");
    for(i=0; i<N; i++)
    {
        for(j=0; j<M; j++)
        {
            printf("%-5d", board[i][j]);
        }
        printf("\n");
    }

  return 0;
}
