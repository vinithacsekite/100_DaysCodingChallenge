#include <stdio.h>

int main(void) {
    int n,i,flag=0;
    printf("\nEnter the size of the array\n");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter %d elements\n",n);
    for(i=0;i<n;i++)
        scanf("\n%d",&a[i]);
    for (int i = 0; i < n; i++)
    { 
        while (a[i] % 2 == 0) 
            a[i] /= 2; 
 
        while (a[i] % 3 == 0) 
            a[i] /= 3; 
    } 
    for (int i = 1; i < n; i++) 
        if (a[i] != a[0]) { 
            flag=1; 
        } 
  
    if(flag==0)
        printf("\nYes, it’s possible to make all numbers of an array equal");
    else
        printf("\nNo, it’s not possible to make all numbers of an array equal");
  
  return 0;
}
