#include <stdio.h>

int main(void) {
    int arr[10],n,sum=0,i;
    printf("\nEnter the size of the array\n");
    scanf("%d",&n);
    printf("\nInput %d elements",n);
    for(i = 0;i < n;i++)
        scanf("\n%d",&arr[i]);
    for(i =0;i< n ;i++)
        for(int j=1;j<(n-1);j++)
            if(arr[i]+arr[j] == 0 && sum ==0)
            {
                printf("\nsubarray[%d,%d]'s sum is 0",arr[i],arr[j]);
                sum=1;
            }
        if(sum == 0 )
                printf("\nno subarray yields 0 as sum");
  return 0;
}
