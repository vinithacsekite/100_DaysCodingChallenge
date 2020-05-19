#include <stdio.h>
#include <stdlib.h>
#include<string.h>



int digSum(int n);
int array_to_num(int[] , int);

int array_to_num(int arr[],int n){
    char str[6][3];
    int i;
    char number[13] = {'\n'};

    for(i=0;i<n;i++) 
        sprintf(str[i],"%d",arr[i]);
    for(i=0;i<n;i++)
        strcat(number,str[i]);

    i = atoi(number);
    return i;
} 


int digSum(int n) 
{ 
    int sum = 0; 
    while(n > 0 || sum > 9) 
    { 
        if(n == 0) 
        { 
            n = sum; 
            sum = 0; 
        } 
        sum += n % 10; 
        n /= 10; 
    } 
    return sum; 
} 



int main(void) {
    int num,i,ch,isum=0,d,sval=0,new[10],real_num,count=0;
    char str[5];
    
    printf("\nWhat do you want to choose\n1.String\n2.Integer\n");
    scanf("%d",&ch);
    if(ch == 2)
    {
        printf("\nEnter the number\n");
        scanf("%d",&num);
        printf("\nSum of digits is %d",digSum(num));
        
    }
  else
  {
      printf("\nEnter the string");
      scanf("%s",str);
        printf("\nThe number equivalent of a given text is\n");
      for(i=0; i < sizeof(str); i++)
      {
          if(str[i]== 0)
            break;
        else
      
          sval= ((int)str[i])-96;
          printf("%d",sval);
          ++count;
          new[i]=sval;
          
      }
      real_num = array_to_num(new,count);
      printf("\nSum of digits is %d",digSum(real_num));
  }
     
  return 0;
}
