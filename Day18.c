#include <stdio.h>

int main(void)
{
    int DD,YY,MM,Century,format,YYYY;
    printf("\nEnter the date in DD format\n");
    scanf("%d",&DD);
    printf("\nEnter the month in MM format\n");
    scanf("%d",&MM);
    printf("\nEnter the year in YY format\n");
    scanf("%d",&YY);
    printf("\nChoose Century\n1.19th\n2.20th\n3.21st\n");
    scanf("%d",&Century);
    printf("\nChoose the format\n1.MM-DD-YYYY\n2.DD-MM-YYYY\n3.YYYY-MM-DD\n");
    scanf("%d",&format);
    switch(Century)
    {
        case 1:YYYY=18;break;
        case 2:YYYY=19;break;
        case 3:YYYY=20;break;
        default:break;
        
    }
    switch(format)
    {
        case 1:printf("\nThe date is %d-%d-%d%d",MM,DD,YYYY,YY);
                break;
        case 2:printf("\nThe date is %d-%d-%d%d",DD,MM,YYYY,YY);
                break;
         case 3:printf("\nThe date is %d%d-%d-%d",YYYY,YY,MM,DD);
                break;
        default:break;
    }
  
  return 0;
}
