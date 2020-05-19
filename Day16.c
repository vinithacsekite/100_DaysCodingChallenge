#include<stdio.h>
#include<stdlib.h>
int main()
{
    int* dynamic; //pointer declaration
    int n,i;
    printf("\nEnter the number of variables to be allocated\n");
    scanf("%d",&n);
    dynamic=(int*)malloc(n * sizeof(n));   //allocation of dynamic memory using malloc()
    printf("\n%d bytes of memory allocated successfully",n*4);
    printf("\nBase Address is %p ",dynamic);
    for(i=0;i<n;i++)
    {
         dynamic[i] = i + 1; 
        printf("\nThe address of %d is %p and its value is %d",i+1,dynamic++,i+1);
    }

return 0;
}
