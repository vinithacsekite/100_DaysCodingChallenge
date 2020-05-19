
#include <stdio.h>

int main(void) {
  int i,j,n,a;
  int arr[100];
  printf("\nEnter the size of the array\n");
  scanf("%d",&n);
  printf("\nInput %d integer numbers\n",n);
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(arr[i]<arr[j]){
        a=arr[i];
        arr[i]=arr[j];
        arr[j]=a;
      }
    }
  }
    printf("\nPositive numbers are\n");
    for(i=0;i<n;i++){
      if(arr[i]>=0){
      printf("%d\n",arr[i]);
    }
  }
  
    printf("\nNegative numbers are\n");
    for(i=0;i<n;i++){
      if(arr[i]<0){
      printf("%d\n",arr[i]);
    }
  }
  
  return 0;
}
