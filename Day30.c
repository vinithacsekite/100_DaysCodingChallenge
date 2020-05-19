#include <stdio.h>

int main(void) {
    int n,arr[20],i,j,count=0;
    printf("\nEnter the size of the array\n");
    scanf("%d",&n);
    printf("\nInput %d integer numbers\n",n);
    for(i=0;i<n;i++)
    {
        scanf("\n%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j])
            {
                arr[i]=-1;
                arr[j]=-1;
                count+=2;
            }
        }
    }
    
    if(count ==0)
         printf("\nno unique elements in the given array");
     
    else
    { printf("\nThe unique elements are");
   
        for(i=0;i<n;i++)
        { if(arr[i]!=-1)
            {
               printf("\n%d",arr[i]);
                count++;
            }
            }
    }
    
  
  return 0;
}
