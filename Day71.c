#include <stdio.h>

int main(void) {
    int size,i,j,min[2],m;
    printf("\nEnter the size of the array\n");
    scanf("%d",&size);
    int arr[size];
    printf("\nEnter %d elements\n",size);
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    m=arr[0]+arr[1];
  for(i=0;i<size;i++)
    for(j=i+1;j<size;j++)
        if(arr[i]+arr[j] <= m)  //checks for min sum pair
        {
            min[0]=arr[j];
            min[1]=arr[i];
            m=min[0]+min[1];    //updates the min value
        }
            
    printf("\nSmallest pair is [%d,%d]\n",min[0],min[1]);
    printf("\nSum of the smallest pair is %d",m);
  return 0;
}
