#include <stdio.h>

int main(void) {
    int c = 0, sum = 0;
  char s[10];
 
  printf("Input the String\n");
  scanf("%s",s);
  printf("\nThe vowel(s) is(are)");
 
  while (s[c] != '\0')
  {
    if (s[c] == 'a' || s[c] == 'A' || s[c] == 'e' || s[c] == 'E' || s[c] == 'i' || s[c] == 'I' || s[c] =='o' || s[c]=='O' || s[c] == 'u' || s[c] == 'U')
     { 
        if(sum == 0)        printf(" %c",s[c]);
         else               printf(", %c",s[c]);
      sum+=(int)s[c];   
    }
     c++;
  }
  printf("\nASCII summation is %d",sum);
 
  return 0;
}
