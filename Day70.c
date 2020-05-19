#include <stdio.h>
int x,i;

void Triangle(int A[] , int n) 
    { 
        if (n < 1) 
            return; 
  
        int temp[n - 1]; 
        for (int i = 0; i < n - 1; i++) 
        { 
            x = A[i] + A[i + 1]; 
            temp[i] = x; 
        } 
        
        Triangle(temp, n - 1); 
        printf("\n");       //print executes after each return
        for (i = 0; i < n ; i++) 
        { 
            if(i == n - 1) 
                printf("%d",A[i]); 
            else
                printf("%d",A[i]);
        } 
                  
    } 
 

int main(void) {
     int n;
        printf("\nEnter the size of the array\n");
        scanf("%d",&n);
        int arr[n] ;
        printf("\nEnter %d elements\n",n);
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        int size = sizeof(arr) / sizeof(arr[0]); 
        printf("\nSum Triangle is\n");
    Triangle(arr, size);
  
  return 0;
}
