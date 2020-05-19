#include <stdio.h>
#include<string.h>
char s[5],n[5];
int x,size;
void prime(char[] ); 
void alter(char[] , int );



void alter(char s[5], int i) 
{ 
    if (s[i] <= '2')
    {
        --size;
        s[i] = '7'; 
    }
    else if (s[i] == '3') 
        s[i] = '2'; 
    else if (s[i] <= '5') 
        s[i] = '3'; 
    else if (s[i] <= '7') 
    {
        s[++i] = '5'; 
        x=i;
    }
    else
        s[i] = '7'; 
  
    return; 
} 
  
void prime(char s[5]) 
{ 
    for (int i = 0; i <strlen(s); i++)
    { 

        if (s[i] != '2' || s[i] != '3' || s[i] !='5' || s[i] != '7') 
        { 
            while (s[i] <= '2' && i >= 0) 
                i--; 

            if (i < 0)
            { 
                i = 0; 
                alter(s, i); 
            } 
 
            else
                alter(s, i); 

            for (int j = x + 1; j < size; j++)  
                s[j] = '7';  
                 break; 
        } 
    } 
    printf("\nResult is ");
    for(int x=0;x<size;x++)
        printf("%c",s[x]);
    return ;
} 


int main(void) {
      printf("\nEnter a number\n");
    scanf("%s",n);
    size=strlen(n);
    prime(n);
  return 0;
}
