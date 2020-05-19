#include <stdio.h>
int isPrime(int);
int isPrime(int n)
{
        int c=0;
        for(int i=1;i<=n;i++)
            if(n%i==0)
                c++;
        if(c==2)
            return 1;
        else
            return 0;
}

int main(void) {
     printf("Enter the value for N\n");
        int num,diff1=0,diff2=0,num1=0,num2=0;
        scanf("%d",&num);
        for(int i=num;;i++)
        {
            if(isPrime(i))
            {
                diff1=i-num;
                num1=i;
                break;
            }
        }
        for(int i=num;;i--)
        {
            if(isPrime(i))
            {
                diff2=num-i;
                num2=i;
                break;
            }
        }
        if(diff1<=diff2)
            printf("Result is %d",num-num1);
        else if(diff2<diff1)
            printf("Result is %d",num-num2);
        else if(diff1==0)
             printf("Result is 0");
  
  return 0;
}
