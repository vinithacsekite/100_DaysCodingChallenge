#include<stdio.h>
int score(int,int);

int score(int n, int flag) 
{ 
    if (n == 0)
        return 1; 
  
    int sum = 0; 
    if (flag == 0 && n > 1) 
        sum = sum + score(n - 1, 0) + score(n - 2, 1); 
    else
        sum = sum + score(n - 1, 0); 
  
    return sum; 
} 


int main() 
{ 
    int n ;
    printf("\nEnter the score\n");
    scanf("%d",&n);
    printf("%d",score(n, 0)); 
    return 0; 
}
