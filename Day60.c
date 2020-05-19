#include <stdio.h>

int main(void) {
    int l,sum,i,j,k=0;
    printf("\nEnter array length and sum respectively\n");
    scanf("%d",&l);
    scanf("\n%d",&sum);
    int arr[l],new[l];
    printf("\nEnter %d elements",l);
    for(i=0;i<l;i++)
    {
        scanf("%d",&arr[i]);
    }
 
   for(i =0;i< l ;i++){
        for(int j=i+1;j<(l-1);j++)
       {
            if(arr[i]+arr[j] == sum)
            {
                new[k]=arr[i];
                 k++;
            }
            if( arr[i] == -arr[j])
            {
                new[k]=arr[i];
                 k++;
                new[k]=arr[j];
                k++;
            }
       }
    }
    
    if(new[0] == '\0')
    {
        printf("\nSubarray not found");
    }
    else
    {
        printf("\nSubarray is ");
        for(i=0;i<k;i++)
            printf("%d ",new[i]);
            printf("%d ",new[0]);
    }
    
    
  return 0;
}
