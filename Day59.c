// #include <stdio.h>
// #include<string.h>

// int main(void) {
//     char arr[35];
//     printf("\nEnter the string\n");
//     scanf("%[^\n]s",arr);
//     printf("\n%c",(arr[0]-32));
//     for(int i=1;i<strlen(arr);i++)
//     {
//         if(arr[i+1] ==' '  || arr[i-1] == ' ' || arr[i+1] =='\0' ||arr[i+1] ==','  || arr[i-1] == ',')
//             printf("%c",arr[i]-32);
//         else
//             printf("%c",arr[i]);
//     }
  
//   return 0;
// }


//another solution:
#include <stdio.h>
#include<string.h>

int main(void) {
    char arr[35];
    printf("\nEnter the string\n");
    scanf("%[^\n]s",arr);
    printf("\n%c",(arr[0]-32));
    for(int i=1;i<strlen(arr);i++)
    {
        if((arr[i+1] >= 0 && arr[i+1] <= 47) || (arr[i-1] >= 0 && arr[i-1] <= 47)  )
            printf("%c",arr[i]-32);
        else
            printf("%c",arr[i]);
    }
  
  return 0;
}
