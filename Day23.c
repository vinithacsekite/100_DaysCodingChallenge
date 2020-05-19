#include <stdio.h>

int main(void) {
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i==j)
                printf("* ");
            else
                printf("$ ");
        }
        
        if(i==4 && j == 4)
              printf("*");
        else 
            printf("$");
         
        printf("\n");
    }
  
  return 0;
}
