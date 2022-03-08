/*A prime number program*/
#include <stdio.h>
#include <stdlib.h>

/*Single Prime check*/
void checkPrime(void)
{
    int d=0,n=0;

    //infinite for
    for(;;)
    {
    printf("---------Single prime check mode---------\n");
    printf("Enter a no.: \n");
    scanf("%d",&n);

    //inner for
    for(int i=2;i<=9;i++)
    {
        if(((n%i)==0&&n!=i)||n==1)
        {
           printf("\tNot prime || ");
           printf("Divisible by %d * %d times.\n",i,n/i);
           break;
        }
        else
            if(i==9||i==n)
            {
                printf("\t prime\n");
                break;
            }    
    }//inner for end
    printf("\nDo you still want to continue here strike any other number\nPress 0 for Main menu OR 2 for exit\n");
    scanf("%d",&d);
    if(d==0)break;
    else if(d==2)exit(0);
    }//infinite for end
}

/*Bulk Prime Calculater*/
void calculatePrime(void)
{

    int count=0,count2=0,d=0,j,k,m;

    //infinite for
    for(;;)
    {
    printf("---------Bulk search prime mode---------\n");
    printf("Enter the range of no.: ");
    scanf("%d %d",&j,&k);

    //outer for
    for(int m=j;m<k;++m)
    {
        /*Checking the divisibility of number from 2-9*/
        //inner for
        for(int i=2;i<10;++i)
        {
            /*if it is divisible we will not print it */
            if(m%i==0&&m!=i)break;
            else if(i==9&&j!=1)printf("\t%d",m),count++,count2++;
        }//inner for end
        
        //Printing new line after 10 outputs
        if(count==10)
        {
            printf("\n");
            count=0;//reseting the count to 0
        }
    }//outer for end
    printf("\n");
    for(int d=0;d<120;d++)printf("-");
    printf("\n\nTotal %d Prime numbers between (%d %d)\n\n",count2,j,k);

    printf("\nDo you still want to continue here strike any other key\nPress 0 for Main menu OR 2 for exit\n");
    scanf("%d",&d);
    if(d==0)break;
    else if(d==2)exit(0);
    }//infinite for end

}

/*Driver function*/
int main()
{
  int num=0,choice=0,c2=0;

for(;;)
{   printf("//////////////////////MAIN MENU/////////////////////\n");
    printf(" 1.Check prime.\n 2.Bulk search prime\n 3.Quit\n");
    printf("Enter your option : ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:checkPrime();break;
        case 2:calculatePrime();break;
        case 3:exit(0);
        default :
            {
                system("cls");
                printf("?????????????\n");
                printf("Invalid respone,Please enter correct option\n");
            }
    }//switch end
}//infinite for end
    return 0;
}