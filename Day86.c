#include <stdio.h>
 
int main()
{
  int n, a[10], b[10], count = 0,output=0, c, d,j,i;
 
  printf("Enter the size of the array\n");
  scanf("%d", &n);
 //getting values:
 printf("Enter %d elements\n", n);
 for (c = 0; c < n; c++)
    scanf("%d", &a[c]);
 
 //deleting duplictes:
  for (c = 0; c < n; c++)
  {
    for (d = 0; d < count; d++)
    {
      if(a[c] == b[d])
        break;
    }
    if (d == count)
    {
      b[count] = a[c];
      count++;
    }
  }
  
  //printing the unique pairs:
    printf("\nThe following pairs are unique pairs\n");
  for(i=0;i<count;i++)
    {
        for(j=0;j<count;j++)
        {
           printf("\n(%d,%d)",b[i],b[j]); 
           ++output;
        }
     }
    printf("\nSo the result is %d",output);
}
