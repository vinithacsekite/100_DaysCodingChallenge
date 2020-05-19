#include <stdio.h>
#include<string.h>
 char num[10],max[10];
void palindrome(char[]);
void palindrome(char str[10])
{
    int i,flag=0,length;
    length = strlen(str);
    for(i=0;i < length ;i++){
        if(str[i] != str[length-i-1])
        {
            flag = 1;
            break;
        }
    }
    //if the number is palindrome and largest:
    if (flag==0 && max[0]<num[0])
        for(int i=0;i<strlen(num);i++)
                 max[i]=num[i];
}

int main(void) {
   
    int temp,i,j;
    printf("\nEnter a number\n");
    scanf("%s",num);
   
    for(j=0;j<(strlen(num));j++)
    {
        palindrome(num);
        temp=num[strlen(num)-1];
        for(int i=strlen(num)-1;i>0;i--)
            num[i]=num[i-1];
            
        num[0]=temp;
        palindrome(num);
     }
    // printing the max value:
     if(max[0]!='\0')
        printf("\nThe largest palindromic number is %s",max);
    else
        printf("\npalindrome cannot be formed");
  
  return 0;
}
