#include <stdio.h>
 
int main()
{
  int n, c, k,b[8],count =0;
 printf("Enter the integer\n");
  scanf("%d", &n);
 printf("\nBinary equivalent of %d is ", n);
 
  for (c = 7; c >= 0; c--)
  {
    k = n >> c;
    if (k & 1)
    {
      printf("1");
      b[c]=1;
    }
    else
    {
      printf("0");
      b[c]=0;
    }
  }
  
  for(c=0;c<=7;c++)
  {
      if(b[c]==0)
        ++count;
      else 
        break;
  }
  printf("Number of trailing zeros in its binary representation is %d",count);
 
 
  return 0;
}
