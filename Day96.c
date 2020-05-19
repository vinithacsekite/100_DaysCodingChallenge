#include <stdio.h>

//check for Automorphic Number:
int chk_automorphic(int x)
{
    int digit=0,org=x;
    int sq=x*x;
    while(x>0)
    {
        x=x/10;
        ++digit;
    }
    switch(digit)
    {
        case 1:if(org%10 == sq%10)
                    return 1;
                break;
        case 2:if(org%100 == sq%100)
                        return 1;
                break;
        case 3:if(org%1000 == sq%1000)
                        return 1;
                break;
    }
    return 0;
      
}


//Case 1:
void automorphic()
{
    int num;
    printf("\nEnter a number\n");
    scanf("%d",&num);
    if(chk_automorphic(num)== 1)
          printf("\nthe entered number is a Automorphic Number");
    else
        printf("\nthe entered number is not a Automorphic Number");
}


//Case 2:
void Generate()
{
    printf("\nAutomorphic Numbers between 1 & 1000 are\n");
    for(int i=1;i<=1000;i++)
        if(chk_automorphic(i)==1)
            printf("%d ",i);
}

int main(void) {
    int ch;
    printf("\nChoose the option\n1. Check Automorphic Number\n2. Generate Automorphic Numbers between 1 &1000\n3. Exit\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:automorphic();
            break;
        case 2:Generate();
            break;
        case 3:break;
    }
  
  return 0;
}
