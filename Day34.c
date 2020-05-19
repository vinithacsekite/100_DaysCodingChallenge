#include <stdio.h>
int temp;
void odd_prime(int[],int);
void even_prime(int[],int);
void display(int[],int);
int main(void) 
{
  int n;
  printf("Enter the size of the array\n");
  scanf("%d",&n);
  int arr[n];
  printf("Input %d integer numbers\n",n);
  for(int i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  odd_prime(arr,n);
  even_prime(arr,n);
  return 0;
}

void odd_prime(int arr[],int n)
{
  int sum_odd_p=0,flag=0,odd_p[n],x=0;
  for(int i=1;i<n;i+=2)
  {
    temp=0;
    if(arr[i]!=1)
    {
      for(int j=2;j<arr[i];j++)
      {
        if(arr[i]%j==0)
        {
          temp=1;
          break;
        }
      }
      if(temp==0)
      {
        odd_p[x++]=arr[i];
        sum_odd_p+=arr[i];
        flag=1;
      }
    }
  }
  if(flag==1)
  {
    printf("Odd positioned prime numbers are\n");
    display(odd_p,x);
    printf("Summation is %d\n",sum_odd_p);
  }
  else if(flag==0)
  {
    printf("No odd positioned prime numbers\n");
  }
}

void even_prime(int arr[],int n)
{
  int sum_even_p=0,flag=0,even_p[n],y=0;
  for(int i=0;i<n;i+=2)
  {
    temp=0;
    if(arr[i]!=1)
    {
      for(int j=2;j<arr[i];j++)
      {
        if(arr[i]%j==0)
        {
          temp=1;
          break;
        }
      }
      if(temp==0)
      {
        even_p[y++]=arr[i];
        sum_even_p+=arr[i];
        flag=1;
      }
    }
  }
  if(flag==1)
  {
    printf("Even positioned prime numbers are\n");
    display(even_p,y); 
    printf("Summation is %d",sum_even_p);
  }
  else if(flag==0)
  {
    printf("No even positioned prime numbers\n");
  }
}

void display(int arr[],int n)
{
  for(int i=0;i<n;i++){
    printf("%d\n",arr[i]);
  }
}
