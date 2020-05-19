#include <stdio.h>
char inp[10],new[10];
void consecutive(char [],int s);
void occurance(char [],int s);

void consecutive(char arr[],int s)
{
    int i,j,temp=0,res=1;
    //sorting the array
     for (i = 0; i < s-1; i++) {
      for (j = i+1; j < s; j++) {
         if (arr[i] > arr[j]) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
         }
      }
   }
   // check for consecutive letters
    temp=(int)arr[0];
    for(i=1;i<s;i++)
    {
        if(arr[i] == temp+1)
            temp =arr[i];
        else
            res = 0;
    }
    
    // if consecutive:
    if(res == 1)
    {
         printf("\nThe string'%c'",arr[0]);
         for(int k=1;k<s;k++)
             printf(",'%c'",arr[k]);
        printf(" which are consecutive letters\n");
    }
    // not consecutive:
    else 
    {
         printf("\nThe string'%c'",inp[0]);
        for(int k=1;k<s;k++)
             printf(",'%c'",inp[k]);
        printf(" which are not consecutive letters\n");
    }  
    return ;
    
}



void occurance(char ar[],int s)
{
    int count=1,j,i;
    char ch;
    for(i =0;i<s;i++)
    {
        // count=1;
        for(j=i+1;j<(s);j++)
        {
            if(ar[i] == ar[j])
                ++count;
                ch=ar[i-1];
        }
        
    }  
    if(count>1)
            printf("letter '%c' occurs %d time(s)",ch,count);
        else
            printf("All the letters occurs exactly once");
    return ;
}


//main
int main(void) {
    int res,i=1;
    printf("\nInput the string\n");
    scanf("%s",inp);
    while(inp[i] != '\0')
       i++;
    consecutive(inp,i);
    occurance(inp,i);
  
  return 0;
}
