#include <stdio.h>
#include <string.h>

int main(void) {
    int flag=0;
    char str[30],alp[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int avail[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    printf("\nEnter the string\n");
    scanf("%s",str);
     for(int i=0;i<strlen(str);i++)
        for(int j=0;j<26;j++)
            if(str[i]== alp[j] && avail[j]==0)
                avail[j]=1;
            else if(str[i]== alp[j] && avail[j]==1)
                flag=1;
                
                
     if(flag ==0)
        printf("\n%s is an isogram",str);
    else
        printf("\n%s is not an isogram",str);
                
        
  return 0;
}
