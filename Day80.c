#include <stdio.h>

int main(void) {
    int size,i,j,min;
    printf("\nEnter the size of the array\n");
    scanf("%d",&size);
    int arr[size];
    printf("\nEnter %d integer elements\n",size);
    for(i=0;i<size;i++)
        scanf("\n%d",&arr[i]);
    printf("\nFinal output is\n");
  for(i=0;i<size;i++)
  {
     min=0;
    for(j=0;j<size;j++)
        if(arr[j]<arr[i] && arr[j]>min) //checks for closest min:
            min=arr[j];
    if(min!=0)  //min found:
        printf("%d ",min);
    else
        printf("-1 ");
  }
        
  return 0;
}
