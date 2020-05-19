#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n,ele,flag=0,i;
    int *d_arr;
    printf("\nEnter the size of the array\n");
    scanf("%d",&n);
    d_arr = (int *)calloc(n, sizeof(int)); 
    printf("\nInput %d integer numbers\n",n);
    for(int i=0;i<n;i++){
        scanf("\n%d",&d_arr[i]);
    }
    printf("\nEnter the element to be searched\n");
    scanf("%d",&ele);
    printf("\n%d bytes allocated successfully\n",n*4);
    for( i=0;i<n;i++)
    {
        if (ele == d_arr[i])
        {
            flag=1;
            //printf("\nThe element %d is not found in the given array",ele);
            break;
        }
        else {
            flag=0;
        }
    }
    if (ele==0 && flag ==1)
        printf("\nElement %d found at index %d",ele,i);
    else if(flag==0 ){
        printf("\nThe element %d is not found in the given array",ele);
    }
    else{
         printf("\nThe element %d found at index %d",ele,i);
    }
    
  
  return 0;
}
