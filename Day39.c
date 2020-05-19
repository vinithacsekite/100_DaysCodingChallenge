#include <stdio.h>

int main(void) {
  int val,i,j=0;
  scanf("%d",&val);
  for(int i = 0;i<val;i++){
     for(int j =0;j<val;j++){
      if( i >=j)               
        printf("* ");
      else                    
        printf("  ");
    }
   
    j =val-1;
     while(j>=0)
    {
      if( i <j)               
         printf("  ");
      else                     
        printf(" *");
    j--;
    }
    printf("\n");

  }

  //reverse:
    for(int i = val-1;i>=0;i--)
    {
    for(int j =0;j<val;j++){
      if(j<=i)                
        printf("* ");
      else                    
        printf("  ");
    }
    for(int j =val-1;j>=0;j--){
      if( i <j)               
        printf("  ");
      else                     
        printf(" *");
    }
    printf("\n");
  }
  return 0;
}
