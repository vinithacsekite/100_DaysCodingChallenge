#include <stdio.h>

int main(void) {
    int n,sum=0,arr[20];
    printf("\nEnter the size of the array\n");
    scanf("%d",&n);
    printf("\nInput %d integer numbers\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("\nThe sum of the array elements\n%d",sum);
  
  return 0;
}
