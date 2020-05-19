#include <stdio.h>
long int find_fact(int);
int main(void) {
    int num,res;
  //get the input from the user and pass the same to find_fact()
  printf("\nEnter a number\n");
  scanf("%d",&num);
  res=find_fact(num);
  printf("\nFactorial of %d is %d",num,res);
  return 0;
}

long int find_fact(int n){
  //find_fact() should call itself for backward traversal
  if (n==1)
    return 1;
return (n*find_fact(n-1));
}
