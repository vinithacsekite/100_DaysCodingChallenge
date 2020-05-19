#include <stdio.h>
#include <string.h>

int main(void) {
    int i=0,j,flag=1;
    char str[20],revstr[20];
    printf("\nEnter your string\n");
    scanf("%s",str);
   
    printf("\nEntered string is\n%s",str);
    printf("\nReversed string is\n");
    for( i=(strlen(str)-1);i>=0;i--)
    {
        printf("%c",str[i]);
    }
    i=0; j=(strlen(str)-1);
    while(i<strlen(str)/2 && j>strlen(str)/2)
    {
        if(str[i] == str[j])
        {
            i++;
            j--;
            flag=0;
             
        }
        else
        {
            printf("\nPalindrome string-No");
            break;
        }
    }
    if(flag ==0 )
    {
         printf("\nPalindrome string-Yes");
    }
  return 0;
}
