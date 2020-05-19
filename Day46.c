#include <stdio.h>
#include <string.h>

int main(void) {
    char str[50];
    printf("\nEnter the String\n");
    scanf("%[^\n]%*c",str);
    printf("\n");
    for(int i=0 ;i < strlen(str);i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') ||(str[i]>=48 && str[i]<=57) )
            printf("%c",str[i]);
        else if(str[i] == 32 || str[i] == 44)
            printf(" ");
    }
 
  return 0;
}

//another method:
// #include <stdio.h>
// #include <string.h>
// #include<ctype.h>

// int main(void) {
//     char str[50];
//     printf("\nEnter the String\n");
//     scanf("%[^\n]%*c",str);
//     printf("\n");
//     for(int i=0 ;i < strlen(str);i++)
//     {
//         if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')  )
//             printf("%c",str[i]);
            
//         else if(str[i] == 32 || str[i] == 44)
//             printf(" ");
            
//         else if(isdigit(str[i]))
//             printf("%c",str[i]);
//     }
 
//   return 0;
// }
