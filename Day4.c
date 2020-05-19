#include <stdio.h>

int main(void) {
    int a,b,temp;
    //printf("\nEnter the 2 numbers\n");
    scanf("%d %d",&a,&b);
    printf("\nbefore swapping values are %d %d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\nafter swapping values are %d %d",a,b);
    
    
    
  return 0;
}
