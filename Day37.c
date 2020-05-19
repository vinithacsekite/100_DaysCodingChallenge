#include <stdio.h>
 int n,i,j,arr[20],temp;
 void sort(int n);
 
 void sort(int n)
 {
      for(i=0;i< n-1;i++)
        for( j = 0; j < n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
        
 }

int main(void) {
    
   //before insertion
     printf("Enter the size of the array\n");
    scanf("%d", &n);
    
    printf("Input %d elements\n", n);
    
    for ( i = 0; i < n; i++)    
        scanf("%d", &arr[i]);
    
    printf("\nEnter the value to be inserted\n");
     scanf("%d", &arr[i]);
    ++n;
    
    
    //after insertion
    printf("\nThe current list of the array after sorting\n");
    sort(n-1);
    for(i=0;i<(n-2);i++)
        printf("%d\t",arr[i]);
    printf("%d ",arr[i]);
   
    printf("\nAfter Insert the element the new list is\n");
    sort(n);
    for(i=0;i<(n-1);i++)
        printf("%d\t",arr[i]);
    printf("%d ",arr[i]);
  
  return 0;
}
