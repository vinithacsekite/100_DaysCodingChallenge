#include <stdio.h>

int main(void) {
    int size,i,j,sum=0,n;
    printf("\nEnter the size of the array\n");
    scanf("%d",&size);
    int arr[size],new[size];
    printf("\nEnter %d elements\n",size);
    for(i=0;i<size;i++)
        scanf("\n%d",&arr[i]);
        
    for(j=1;j<size;j++)
        {
            if(arr[j]>arr[j-1])
                 new[j]=arr[j]-arr[j-1];
            else
                new[j]=arr[j];
            sum+=new[j];
        }
    printf("\nResult is %d",sum+arr[0]);
  return 0;
}
