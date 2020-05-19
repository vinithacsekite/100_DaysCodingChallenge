#include <stdio.h>

int main(void) {
    char str[20];
    int i=0,j,size,flag=0;
    printf("\nEnter the string\n");
    scanf("%[^\n]s",str);
    //to find the length of str
    while(str[i] != '\0')
        ++i;
  size=i;
  j=size-1;
  i=0;
  
  //checking for palindrome:
  while (i<j)
  {
      if(str[i]==' ')    ++i;
      if(str[j]== ' ')   --j;
      if(str[i] == str[j])
      {
          ++i;
          --j;
      }
      else
      {
          flag=1;
          break;
      }
  }
  
  if(flag == 0)
    printf("\nThe entered string is a palindrome string");
else
     printf("\nThe entered string is not a palindrome string");
  return 0;
}
