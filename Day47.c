#include <stdio.h>
#include <string.h>

int main(void) {
    char str[30],key[10];
    int j,i=0,s=0,flag=0;
    printf("\nEnter the String\n");
    scanf("%[^\n]s",str);
    scanf("%s",key);
    
    //length of sentence:
    while(str[i] != '\0')
    {
        ++i;
    }
    s=i;    //store the length of str in 's'.
    i=0;
    
    while(i<s)
    {
            j=0;
          while(j<strlen(key) && i<s)
          {
              if(str[i] == key [j])
              {
                  ++i;
                  ++j;
              }
              else
              {
                    ++i;
              }
                    
              if(j == strlen(key))
              {
                  printf("\nthe search word is found");
                  flag=1;
                  break;
              }
              
          }
    }
    if (flag == 0)
        printf("\nthe search word is not found");
  return 0;
}
