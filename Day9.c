#include <stdio.h>
#include<math.h>

int main(void) {
          int  n, count = 1; 
      float  x, average, sum = 0; 
      printf("Input the 10 numbers : \n");
     
      while (count < 11) 
             { 
                  scanf("%f", &x); 
                  sum += x; 
                  ++count; 
             } 
                  average = sum/10; 
    printf("The sum of 10 no is : %.0f\n",ceil(sum));
    
 printf("The Average is : %f",average);
   return 0;
}
