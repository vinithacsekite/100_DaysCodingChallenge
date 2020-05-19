#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char str[30],alp[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int count=0;
    int avail[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    printf("\nEnter the string\n");
    scanf("%[^\n]s",str);
    for(int i=0;i<strlen(str);i++)
        for(int j=0;j<26;j++)
            if(tolower(str[i])== alp[j])
            {
                ++count;
                avail[j]=1;
            }
 
    if(count == 26)
                printf("\nThe entered string is perfect pangram");
    else
    {
        printf("\nThe pangram result is\n");
        for(int i=0;i<26;i++)
            if(avail[i]!=1)
                printf("%c",alp[i]);
    }
        
  
  return 0;
}
