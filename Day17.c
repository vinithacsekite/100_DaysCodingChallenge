#include<stdio.h>
#include<stdlib.h>

int main(void)
{	
    int date,month,year;
    printf("\nInput the Date\nDate\n");
    scanf("%d",&date);
    printf("Month\n");
    scanf("%d",&month);
    printf("Year\n");
    scanf("%d",&year);
    if(date <=31 && month<=12)
        printf("\nThe entered date is %d-%d-%d",month,date,year);
    else
        printf("\nEntered Date is invalid");
    
      return 0;
}
