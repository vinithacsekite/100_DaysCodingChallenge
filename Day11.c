#include <stdio.h>

void swap(int *,int *);       //function declaration

int main(void) {
    int a,b;
    printf("enter 2 numbers to swap\n");
    scanf("%d\n%d",&a,&b);
    printf("\nbefore swapping a and b are %d and %d",a,b);
    swap(&a,&b);   //function call
    printf("\nafter swapping a and b are %d and %d",a,b);

  return 0;
}

//function definition
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
