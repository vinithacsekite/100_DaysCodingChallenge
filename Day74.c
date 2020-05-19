#include <stdio.h>

#define SIZE 5 

int main()
{
    int i, j, N,n,m;
    printf("\nEnter the value for N");
    scanf("%d",&n);
    printf("\nEnter the value for M");
    scanf("%d",&m);
    printf("\nThe final spiral matrix is\n");
    
    int board[n][m];
    int left, top,down;

    left = 0;
    top  = m - 1;
    if(n==m)
        down=n;
    else
        down= n - 1;
    N    = 1;

    for(i=1; i<=n/2; i++, left++, down--,top--)
    {
        // Fill from left to right
        for(j=left; j<=top; j++, N++)
        {
            board[left][j] = N;
        }

        // Fill from top to down
        for(j=left+1; j<=down-1; j++, N++)
        {
            board[j][top] = N;
        }
        if(n==m)
            --down;
        // Fill from right to left
        for(j=down-1; j>=left; j--, N++)
        {
            board[down][j] = N;
        }
        

        // Fill from down to top
        for(j=down-1; j>=left+1; j--, N++)
        {
            board[j][left] = N;
        }
        if(n==m)
            ++down;
    }

    // Print the pattern
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(board[i][j] == 0)
               board[i][j]= N;
            printf("%-5d ", board[i][j]);
        }
        printf("\n");
    }

    return 0;
}
