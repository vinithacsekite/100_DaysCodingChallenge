#include <stdio.h>
int digit_common(int,int);



int digit_common(int num1,int num2)
{
    int s1[3],s2[3],i,j,c1=0,c2=0;
   while(num1>0)
   {
       s1[c1]=num1%10;
       num1=num1/10;
       ++c1;
   }
   while(num2>0)
   {
       s2[c2]=num2%10;
       num2=num2/10;
       ++c2;
   }
  for(i=0;i<c1;i++)
    for(j=0;j<c2;j++)
        if(s1[i] == s2[j])
            return 1;
    return 0;
}

int main(void)
{
    int size,i,j,val,x=0;
    printf("\nEnter the size of the array\n");
    scanf("%d",&size);
    int arr[size],new[size];
    printf("\nEnter %d elements\n",size);
    //getting input:
    for(i=0;i<size;i++) 
        scanf("\n%d",&arr[i]);
        
    //new array eliminating the multiple of 11:
    for(i=0;i<size;i++)
          if(arr[i]%11 != 0)
          {
            new[x]=arr[i];
            ++x;
          }
    //output part
    printf("\nThe longest subsequence is %d",new[0]);
    for(i=0;i<x-1;i++)
    {
         val=digit_common(new[i],new[i+1]);
         if(val==1)
            printf(",%d",new[i+1]);
    }
        
        
  
  return 0;
}
