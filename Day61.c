#include <stdio.h>

int main(void) {
    int n,i,sum=0;
    printf("\nEnter the number\n");
    scanf("%d",&n);
    for(i=1;i<n;i++)         if(n%i == 0)            sum+=i;
    if(sum == n)     printf("\n%d is a perfect number",n);
    else             printf("%d is not a perfect number",n);
  
  return 0;
}
