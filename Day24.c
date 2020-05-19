#include <stdio.h>

int main(void) {
  int i,j;
  for(i=0;i<=9;++i){
    for(j=1;j<i+2 && (i+2)%2 == 0;++j){
      printf("*");
    }
    if(j%2 != 0){
    printf("\n");
    }
  }
  return 0;
}
