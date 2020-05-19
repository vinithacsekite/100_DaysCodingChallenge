#include <stdio.h>
#include <string.h>
#include<stdlib.h>
void position();
char s[30],c[1];
int n,count[10],i,j=0,val;
int main(void) {
  printf("Enter the String\n");
  scanf("%[^\n]s",s);
  //write your logic here
  position();
  
  return 0;
}
void position(){
  //write your logic here
  printf("Enter the character you want to search\n");
  scanf("%s",c);
  printf("The character '%s' found in ",c);
  for(i=0;i<strlen(s);i++){
    if(s[i]==c[0]){
      count[j]=i;
      j++;
    }
  }
  printf("%d index/indices ",j);
  for(int i=0;i<j;i++){
  printf("%d",count[i]);
  if(i<j-1){
    printf(",");
  }
  }
  if(j==1){
    printf("\n%d",count[0]);
  }
  else{
    printf("\nWhich index you're targeting?\n");
    
    scanf("%d",&val);
    printf("%d",val);
  }
}
