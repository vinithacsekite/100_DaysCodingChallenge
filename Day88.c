#include <stdio.h>
int lcm(int,int);

int lcm(int n1,int n2)
{
    int minMultiple;
    minMultiple = (n1>n2) ? n1 : n2;
    while(1)
    {
        if( minMultiple%n1==0 && minMultiple%n2==0 )
        {
            return minMultiple;
        }
        ++minMultiple;
    }
    return 0;
} 

int main(void) {
    int i,j,count=0,size,min;
  printf("\nEnter the size of the array\n");
  scanf("%d",&size);
  int arr[size];
  printf("\nEnter %d elements\n",size);
  for(i=0;i<size;i++)
    scanf("%d",&arr[i]);
  
  for(i=0;i<size-1;i++)
    for(j=i+1;j<size;j++)
        if( lcm(arr[i],arr[j]) >  ( min= (arr[i]<arr[j])? arr[i] : arr[j]))
            ++count;
            
    printf("\nResult is %d",count);
}
