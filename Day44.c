#include <stdio.h>
#include <string.h>
  char s[30],c[1];
  int res;
int position();

//main
int main(void) {
 printf("Enter the String\n");
  scanf("%s",s);
  res=position();
  printf("\n%d",res);

  
  return 0;
}



int position( ){
  //write your logic here
 printf("Enter the character you want to search\n");
 scanf("%s",c);
  for(int i=0;i<strlen(s);i++)
  {
   if(s[i] == c[0])     return (i);
  }
  return -1;
}
