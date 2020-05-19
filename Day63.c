#include <stdio.h>
int main(void) {

int count;
   char inp[50];
   printf("\nEnter the input string\n");
   scanf("%s",inp);
   printf("\nRLE result is ");
    
    for(int i=0;i<sizeof(inp);i++)
     {
       count=1;
       if(inp[i]=='\0')
         break;
         
      if(inp[i] != inp[i+1])    //checks for single values
            printf("1%c",inp[i]);
            
      else if(inp[i] == inp[i+1])   //checks for multiple values
        {
            for(int j=i;j<sizeof(inp);j++)
            {
                 if(inp[i] == inp[j+1])
                 {
                     count++;
                 }
                  else
                    break;
            
            }
            i=i+(count-1);
            printf("%d",count);
            printf("%c",inp[i]);
        }

    }
  return 0;
}
