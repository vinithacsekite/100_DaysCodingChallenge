#include <stdio.h>
#include<string.h>
# include <math.h>
int flg;


void chkPrime(long int n)
{
    long int i;
    i=n-1;
    while(i>=2)
    {
        if(n%i==0)
        {
            flg=1;
        }
        i--;
    }
}

void AllCombination(long int a)
{
  long int b,c,d,e,i,j,k,s,z,v,x[8],y[8],m;
  b=a;
  i=0;
  while(b>0)
  {
      y[i]=b % 10;
      b=b/10;
      i++;
  }
  c=0;
  for(j=i-1;j>=0;j--)
  {
    x[c]=y[j];
    c++;
  }
  m=i;
  while(m>0)
  {
     c=m-1;
     d=i-1;
     e=0;
     s=0;
     while(e<i)
     {
       z=pow(10,d);
       v=z*x[c%i];
       c++;
       d--;
       e++;
       s=s+v;
     }
     m--;
     chkPrime(s);
  }
}




// case 1:
void circular_prime()
{
  long int l;
  printf("\nEnter a number\n");
  scanf("%li",&l);
  AllCombination(l);
  if(flg==0)
          printf("the entered number is a circular prime number");
    else
        printf("\nthe entered number is a not circular prime number");
    return ;
}

//case 2:
void Generate()
{
    printf("\nThe circular prime numbers between 1 & 1000 are\n");
    long int i=2,ctr=1000;
    while(i<=ctr)
    {
      flg=0;
      AllCombination(i);
      if(flg==0)
      {
          printf("%li ",i);
      }
      i++;
    }
    return;
}

int main(void) {
    int ch;
    printf("\nChoose the option\n1. Check Circular Prime\n2. Generate Circular Prime numbers between 1 & 1000\n3. Exit\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:circular_prime();
            break;
        case 2:Generate();
            break;
        case 3: break;
     }
  
  return 0;
}
