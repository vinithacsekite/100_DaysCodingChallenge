#include <stdio.h>
void display();
void create(); 
void deleteElement(int);

int arr[20],choice,dele,posi,n,count=0; 

void create(){
  printf("\nEnter the size of the array");
  scanf("%d",&n);
  printf("\nInput %d integer numbers\n",n);
  for(int i = 0; i<n; i++){
    scanf("%d",&arr[i]);
    
  }
}

void display(){
  for(int i = 0; i < n; i++){
    printf("\n%d",arr[i]); 
  }
}

void deleteElement(int pos){
  if(pos >n)
    printf("\n Enter a valid Postion less than %d",n);
  else{
    for(int i = pos+1;i < n ;i++){
      arr[i-1] = arr[i];
    }
    n--; 
  }
}

int main(void) { 
    do
    {
        printf("\nWhat do you want to do\n1. Insert\n2. Delete\n3. Display\n4. Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: create();
                    break;
            case 2:printf("\nWhich element you want to delete from the given array\n");
                    scanf("%d",&dele);
                    for(int i=0;i<n;i++)
                    {
                         if(arr[i]==dele)
                            printf("\nThe element %d found in the following positions",dele);
                            break;
                    }
                     
                    for(int i=0;i<n;i++)
                    {
                        if(arr[i]==dele)
                        {
                            printf("\n%d",i);
                            count++;
                        }
                    }
                    if(count == 0)
                    {
                        printf("\nThe element %d was not found in the given array",dele);
                        break;
                    }
                    printf("\nWhich index you’re targeting?");
                    scanf("%d",&posi);
                     deleteElement(posi);
                     printf("\nThe element %d at the index %d removed successfully",dele,posi);
                    break;
            case 3: display();
                     break;
            case 4 :break;
        }
        
    }while(choice!=4);
  
  return 0;
}
