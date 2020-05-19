#include <stdio.h>
int ascend(int a[],int n);
int descend(int a[],int n);
int s_largest(int a[],int n);
int s_smallest(int a[]);


int main(void) {
  //let your logic goes here
  //you should engage the stack by calling 4 user defined mentods 
  //for four different functionalities required
    int i,j,n,a;
  int arr[100];
  printf("\nEnter the size of the array\n");
  scanf("%d",&n);
  printf("\nInput %d integer numbers\n",n);
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  ascend(arr,n);
  
  descend(arr,n);
  s_largest(arr,n);
  s_smallest(arr);
  return 0;
}
int ascend(int a[],int n){
    int small,temp;
    printf("\narray contents in ascending order are\n");
     int i, j, min_idx; 
    for (i = 0; i < n-1; i++) 
    { 
        min_idx = i; 
        for (j = i+1; j < n; j++) 
          if (a[j] < a[min_idx]) 
            min_idx= j; 
            temp=a[min_idx];
                a[min_idx]=a[i];
                a[i]=temp;
    } 
    
     for(i=0;i<n;i++){
        printf("\n%d",a[i]);
  }
                
    return 0;
     
  
}
int descend(int a[],int n){
    printf("\narray contents in descending order are\n");
    for(int i=n-1;i>=0;i--){
        printf("\n%d",a[i]);
  }
        
  return 0;
}
int s_largest(int a[] ,int n){
   printf("\nsecond largest element in a given array is\n");
   printf("%d",a[n-2]);
   return 0;
  
}
int s_smallest(int a[]){
     printf("\nsecond smallest element in a given array is\n");
   printf("%d",a[1]);
   return 0;
  
}
