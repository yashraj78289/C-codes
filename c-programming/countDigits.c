#include <stdio.h>
#include <stdlib.h>

int countDigits(int n)
{
    if(n==0)return 0;
    return 1+countDigits(n/10);
}

int main(void)
{
    int num,digits;
    printf("Enter the number : ");
    scanf("%d",&num);

    digits=countDigits(num);
    printf("The digits in the number are: %d",digits);
    return 0;
}