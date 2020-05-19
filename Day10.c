#include <stdio.h>

int main(void) {
    int i,a,b,s=0;
    printf("\nEnter two numbers to check if Amicable or not\n");
    scanf("%d\n%d",&a,&b);
     for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            s=s+i;
        }
    }
 
    if(s==b)
    {
        s=0;
        for(i=1;i<b;i++)
        {
            if(b%i==0)
            {
                s=s+i;
            }
        }
 
       
    }
    
    
    if(s==a)
    {
        printf("%d and %d are Amicable numbers",a,b);
    }
    else
    {
        printf("%d and %d are not Amicable numbers",a,b);
    }
    
  return 0;
}
