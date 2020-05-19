#include <stdio.h>

int main(void) {
    int i,j;
    for (i=0;i<5;i++)
    {
        for (j=0;j<4;j++)
        {
           
            if(i == 2 && j==2)
            {
                printf("0 ");
            }
            else
                 printf("# ");
        }
        printf("#");
        printf("\n");
    }
  return 0;
}
