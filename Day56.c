#include <stdio.h>

int main(void) {
    int i,j,s,rot,flag=0,ch;
    printf("\nEnter the size of the array\n");
    scanf("%d",&s);
    int arr[s];
    printf("\nInput %d numbers",s);
    for(i=0;i<s;i++)
        scanf("\n%d",&arr[i]);
    printf("\nWant to perform left rotate or right rotate?\n1.Left rotate\n2.Right rotate\n");
    scanf("%d",&ch);
    if(ch == 1)
    {
    printf("\nInput number of times to rotate\n");
    scanf("%d",&rot);
    printf("\nArray after left rotation %d time(s)",rot);
        for(i=rot;i<s;i++){
            printf("\n%d",arr[i]);
            if(i == s-1 && flag ==0)
            {
                i=-1;
                s=rot;
                flag=1;
            }
        }
    }
    else
    {
         printf("\nInput number of times to rotate\n");
         scanf("%d",&rot);
         printf("\nArray after right rotation %d time(s)",rot);
         for(i=s-rot;i<s;i++)
         {
             printf("\n%d",arr[i]);
            if(i == s-1 && flag ==0)
            {
                i=-1;
                s=s-rot;
                flag=1;
            }
          }
        
    }
  
  return 0;
}
