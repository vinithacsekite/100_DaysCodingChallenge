#include <stdio.h>
   int arr1[100], arr2[100], arr3[200];
    int s1, s2, s3;
    int i, j, k;

int main(void) {
     printf("Input the number of elements to be stored in the first array");
       scanf("%d",&s1);
   
       printf("Input %d elements in the array\n",s1);
       for(i=0;i<s1;i++)
            {                  
	      scanf("\n%d",&arr1[i]);
	    }


       printf("Input the number of elements to be stored in the second array");
       scanf("%d",&s2);
   if(s1==s2)
   {
           printf("Input %d elements in the array\n",s2);
       for(i=0;i<s2;i++)
            {
	      scanf("\n%d",&arr2[i]);
	    }
	    
	    
	    
     s3 = s1 + s2;
    for(i=0;i<s1; i++)
        {
            arr3[i] = arr1[i];
         }
     for(j=0;j<s2; j++)
        {
            arr3[i] = arr2[j];
            i++; 
        }

//sorting:
    for(i=0;i<s3; i++)
        {
           for(k=0;k<s3-1;k++)
             {
         
                if(arr3[k]<=arr3[k+1])
                 {
                   j=arr3[k+1];
                   arr3[k+1]=arr3[k];
                   arr3[k]=j;
                 }  
              }
         }   
         
         
    
     printf("\nThe merged array in descending order is \n");
    for(i=0; i<s3; i++)
    {
        printf("%d\t", arr3[i]);
    }
	printf("\n\n");
    
   }
   else
    printf("\nmake sure both the arrays must be with the same size");
  return 0;
}
