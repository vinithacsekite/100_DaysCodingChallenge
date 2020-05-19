#include<stdio.h>
int main(void){
    char var[]="hello";
    char *p=var;
    for(int i=0;i<sizeof(var);i++)
    {
        printf("%c\t",*(p+i));
    }

return 0;
}
