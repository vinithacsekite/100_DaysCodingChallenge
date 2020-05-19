#include <stdio.h>
#include<string.h>

int main(void) {
    char num[10];
    int temp;
    printf("\nEnter a number\n");
    scanf("%s",num);
    printf("\nPossible cyclic permutations are\n%s",num);
   
    for(int j=0;j<(strlen(num)-1);j++)
    {
        temp=num[strlen(num)-1];
        for(int i=strlen(num)-1;i>0;i--)
            num[i]=num[i-1];
            
        num[0]=temp;
        printf("\n");
        for(int i=0;i<strlen(num);i++)
            printf("%c",num[i]);
    }
  
  return 0;
}
