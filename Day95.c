
#include <stdio.h>
#include<math.h>

//check given number is Narcissistic or not:
int chknarcissitic(int val)
{
    int x,i=0,sum=0,digit=0;
    x=val;
    
    while(x>0)  //loop to find digit: 
    {
       x=x/10;
        ++i;
    }
    digit=i;
    
    while(val>0)
    {
        sum+=pow((val%10),digit);   //(eg:1^4 + 6^4 + 3^4 + 4^4 = 1634)
        val=val/10;
    }
    return sum;
}



//Case 2:
void Generate()
{
    int count=0;
    printf("\nThe first 15 Narcissistic Numbers are\n");
    for(int i=1;i<10000;i++)
    {
        
        if(i == chknarcissitic(i))
        {
            printf("%d ",i);
            ++count;
        }
        if(count== 15)
            break;
    }
}


//Case 1:
void Narcissitic_number()
{
    int num;
    printf("\nEnter a number\n");
    scanf("%d",&num);
    if(num == chknarcissitic(num))
        printf("\nthe entered number is a Narcissistic Number");
    else
        printf("\nthe entered number is not a Narcissistic Number");
}

int main(void) {
    int ch;
    printf("\nChoose the option\n1. Check Narcissistic Number\n2. Generate first 15 Narcissistic Numbers\n3. Exit\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:Narcissitic_number();
            break;
        case 2:Generate();
            break;
        case 3: break;
    }
  
  return 0;
}
