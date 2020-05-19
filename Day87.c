#include <stdio.h>
#include <string.h>
int i,j,frst,last,mid;

int palindrome(char[]);
int palindrome(char str[10])
{
    frst=0;
    last=strlen(str)-1;
    while(frst<last)
    {
        if (str[frst++] != str[last--]) 
        { 
            return 0; 
        } 
     }
    return 1;
}


int main(void) {
    char str[10];
    printf("\nEnter the string\n");
    scanf("%s",str);
    printf("\nPalindromic partitions are\n");
    for(i=0;i<strlen(str);i++)
        printf("%c ",str[i]);
    
    if(palindrome(str) == 0)    //non palindrome string:
        {
            for(i=0;i<strlen(str)-1;i++)
            {
                if(str[i]==str[i+1])
                    printf("\n %c%c",str[i],str[i+1]);
            }
        }
    else        //palindrome string:
    {
        frst=0;
        last=strlen(str)-1;
        i=1;
        mid=strlen(str)/2;
        while(i<mid)
        {
            for(j=0;j<mid-i;j++)
            {
                printf("\n%c",str[j]);
            }
            printf(" ");
            for(j=i;j<last;j++)
            {
                    printf("%c",str[j]);
            }
             printf(" ");
             for(j=last;j<strlen(str);j++)
                      printf("%c",str[j]);
                      
            ++i;
            --last;
        }
        printf("\n%s",str);
    }
    

  return 0;
}
