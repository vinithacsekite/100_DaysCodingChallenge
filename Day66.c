#include <stdio.h>
#include<string.h>

int main(void) {
    char str[20];
    int i,j, count=0;
    printf("\nEnter the String\n");
    scanf("%s",str);
    for(i=0;i<strlen(str);i++)
    {
        count=0;
        for(j=i+1;j<strlen(str);j++)
        {
            if(str[j]>str[i])
                count++;
        }
        printf("%d ",count);
    }
  
  return 0;
}
