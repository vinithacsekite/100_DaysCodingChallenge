#include <stdio.h>
#include <string.h>

int main(void) {
    int i,l,flag=1;
    char str[10];
    printf("\nEnter the string\n");
    scanf("%s",str);
    l=strlen(str);
    for( i=0;i<(l-1);i++)
    {
        while(str[i]!=str[i+1] && i<(l-2))
            ++i;
       
        for(int j=(l-1);j>0;j--)
            {
                while(str[j-1]!=str[i])
                {
                    --j;
                }
                char temp=str[i+1];
                str[i+1]=str[j];
                str[j]=temp;
                break;
            }
        }
    
    for(i=0;i<l-1;i++)
        if(str[i]==str[i+1])
            flag=0;
            
    if(flag==0)
         printf("\nNot possible to rearrange");
    else
          printf("\n%s",str);

 return 0;
}
