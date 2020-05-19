#include <stdio.h>

int main(void) {
    int i,j,size,count=0;
    printf("\nEnter the size of the array\n");
    scanf("%d",&size);
    int arr[size];
    
    //getting input values:
    printf("\nInput %d elements\n",size);
    for(i=0;i<size;i++)
    scanf("\n%d",&arr[i]);
    
    //counting loop:
    for(i=0;i<size-1;i++)
        for(j=0;j<size;j++)
            if(arr[i] == arr[j] && i!=j && arr[i]>0)
            {   arr[j]=-1;
                ++count;
            }
    printf("\nResult is %d",count);
  return 0;
}
