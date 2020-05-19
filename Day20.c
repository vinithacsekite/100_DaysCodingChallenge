#include <stdio.h>
int main ( )
{
long a,b,c,i,n,j;
printf ("\nEnter the range of fibonacci numbers(please skip first two fibonacci numbers i.e 0 & 1) \t");
scanf ("\n%ld",&n);
a=0;
b=1;
printf("the prime fibonacci numbers are \n");
for (i=1; i<=n; i++)
{
c=a+b;
a=b;
b=c;
for(j=2;j<=c;j++)
{
if(c%j==0)
break;
}
if(c==j)
printf("%ld\n",c);
}

}
