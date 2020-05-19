#include <stdio.h>

int main(void) {
   int array[50], position, c, n, value;
    
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    
    printf("Input %d elements\n", n);
    
    for (c = 0; c < n; c++)    
        scanf("%d", &array[c]);
    
    
    
    printf("\nEnter the value to be inserted\n");
    scanf("%d", &value);
    
    
    printf("\nEnter the index, after the index, value will be inserted\n");
    scanf("%d", &position);
      printf("\nThe current list of the array\n");
    
    for (c = 0; c < n; c++)    
        printf("%d\n", array[c]);    
    
   
    for (c = n - 1; c > position; c--)    
         array[c+1] = array[c];
    
         array[c+1] = value;
    
         printf("\nAfter Insert the element the new list is\n");
    
    for (c = 0; c <= n; c++)    
        printf("%d\n", array[c]);    
    
    return 0;
}
