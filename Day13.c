#include <stdio.h>
int main(void)
{
    char c;
    int isLowercaseVowel, isUppercaseVowel;

    printf("Enter any character :\n");
    scanf("%c",&c);
    if ((c >97) && (c<122))
    {
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
      printf("%c is a VOWEL", c);
    else
        printf("%c is a CONSONANT", c);
    }
    else
    {

    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
     printf("%c is a VOWEL", c);
    else
        printf("%c is aCONSONANT", c);
    }


  
}
