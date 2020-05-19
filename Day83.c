#include <stdio.h>

int main(void) {
    int size,i,j,count=0,k;
    printf("\nEnter the size of the array\n");
    scanf("%d",&size);
    int arr[size];
    printf("\nInput %d elements\n",size);
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    printf("\nEnter the value for k\n");
    scanf("%d",&k);
    for(i=0;i<size;i++)
        for(j=i+1;j<size;j++)
            if((arr[i]+arr[j])%k == 0 )
                ++count;
    printf("\nResult is %d",count);
  return 0;
}
