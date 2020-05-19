#include <stdio.h>
#include<string.h>

int main(void) {
     char n[10],new[10],count=0,k=0;
     printf("\nEnter the string\n");
     scanf("%s",n);
     int s=strlen(n);
    
     for(int i=0;i<s-1;i++)
         for(int j=i+1;j<s;j++){
             count=0;
             if (n[i] == n[j])
             {
                 ++count;
                 new[k]=n[i];
                 ++k;
                 new[k]=n[j];
                 ++k;
                 n[j] ='\0';
             }
         }
         
     if(strlen(n)== 1)//check for same variable eg:'aaa'
        printf("\n-1");
    else
    {
        printf("\n");
        for(int i=0;i<s;i++)
            printf("%c",new[i]);
    }
   
  
  return 0;
}
