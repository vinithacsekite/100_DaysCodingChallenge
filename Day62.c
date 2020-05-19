#include <stdio.h>
int i,n,sum=0,num,arr[5],k=0;

int fact(int);
int  fact(int x)
{
    int f=1;
    if(x == 1)
        return 1;
    for(int j=2;j<=x;j++)
        f=f*j;
        return f;
}

int main(void) {
    printf("\nEnter the limit\n");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(i<10)    //checks between 1-10
        {
            if(i == fact(i))
            {
                arr[k]=i;
                k++;
            }
        }
        else    // greater than 10 and upto  n values
        {
             num=i;
             sum=0;
             while(num>0)   //loop split the number eg:45= 4 and 5
            {
                sum+=fact(num%10);
                num=num/10;
            }
            if(sum == i)
            {
                 arr[k]=i;
                 k++;
            }
         }
    }
    
    //print statement:
    printf("%d",arr[0]);
    for(int i=1;i<k;i++)
        printf(",%d",arr[i]);
    printf(" are Strong numbers between 1 & %d",n);
  
  return 0;
}
