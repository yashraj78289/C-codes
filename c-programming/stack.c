#include <stdio.h>
#include <stdlib.h>

#define n 50

void push(int vl);
int pop(void);

int *tos,*p1,stack[n];
int main(void)
{
    int value;

    tos =stack;
    p1=stack;

    do
    {
        printf("Enter value: ");
        scanf("%d",&value);

        if(value!=0)push(value);
        else printf("Value at the top %d",pop());
    } while (value!=-1);
    
    return 0;
}

void push(int vl)
{
    p1++;
    if(p1==tos+n)
    {
        printf("Stack overflow\n");
        exit(1);
    }
    *p1=vl;
}
int pop(void)
{
    if(p1==tos)
    {
        printf("Stack Underflow.\n");
        exit(1);
    }
p1--;
return *(p1+1);
}
