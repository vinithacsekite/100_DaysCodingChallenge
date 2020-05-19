#include <stdio.h>

int main(void) {
    int n,min,temp,flag;
    printf("\nEnter the size of the array\n");
    scanf("%d",&n);
    int arr[n],i,j,k;
    printf("\nInput %d elements\n",n);
    for(i=0;i<n;i++)
        scanf("\n%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    if(arr[0]%2 ==0)
    {
        flag=0;
        printf("\nSmallest value is %d, so output is Even-Odd pattern\n",arr[0]);
    }
    else
    {
        flag=1;
        printf("\nSmallest value is %d, so output is Odd-Even pattern\n",arr[0]);
    }
    for(i=0;i<n;i++)
        for(j=0;j<=i;j++)
        {
            if (arr[j]!=0 &&arr[j]%2 == 0 && flag==0)
            {
                printf("%d",arr[j]);
                arr[j]=0;
                flag=1;
            }
            else if(arr[j]!=0 &&flag==1 && arr[j]%2 !=0)
            {
                printf("%d",arr[j]);
                arr[j]=0;
                flag=0;
             }
        }
            

  return 0;
}
