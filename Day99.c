#include <stdio.h>
#include <string.h>

int main(void) {
    char pattern[12]="prefixsuffix";
    char str[20];
    int i=1,j;
    printf("\nEnter the string\n");
    scanf("%s",str);
    while(str[0]==str[i])
          ++i;
          
    if(i == strlen(str))
        printf("\n%c%c",str[0],str[1]);
    else
    {
        for(i=0;i<strlen(str);i++)
        {
            j=0;
            while(str[i]==pattern[j] && j<12)
            {
                i+=11;
                j+=12;
                break;
            }
            if(j<12)
             printf("%c",str[i]);
         }
    }
  
  return 0;
}
