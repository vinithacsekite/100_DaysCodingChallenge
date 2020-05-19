#include <stdio.h>

int main(void) {
    int n,i,j;
    printf("\nEnter the size of the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter %d elements\n",n);
    for(i=0;i<n;i++)
        scanf("\n%d",&arr[i]);
    printf("\nResult after replacing duplicates");
    for(i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
            for(j=i+1;j<n;j++)
                if(arr[i]==arr[j])
                    arr[j]+=1;
              printf("\n%d",arr[i]);
    }  
  
  return 0;
}
