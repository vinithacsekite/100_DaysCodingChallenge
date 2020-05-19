#include <stdio.h>
#include <math.h>
int main(void) {
    int a,b,c,s,area;
    printf("\nEnter the values of a, b and c");
    scanf("%d %d %d",&a,&b,&c);
     s = (a+b+c)/2;
   
   area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\nArea of a triangle = %d",area);
  
  return 0;
}
