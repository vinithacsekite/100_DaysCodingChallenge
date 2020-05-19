#include <stdio.h>
#include<string.h>
int voewl(char ch);

int voewl(char ch)
{
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        return 1;
    else
        return 0;
}

int main(void) {
    char str[25];
    printf("\nEnter the string\n");
    scanf("%[^\n]s",str);
     printf("%c", str[0]); 
    for (int i = 1;i<strlen(str); i++) 
        if (!voewl(str[i - 1]) ||  !voewl(str[i])) 
            printf("%c", str[i]); 
  
  return 0;
}
