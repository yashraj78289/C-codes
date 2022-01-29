/*Program to take grades of students of different classes,
(implemented through two-dimensional array)*/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define CLASSES 3
#define GRADES 10

int grade[CLASSES][GRADES];

void enterGrades(void);
int getGrades(int num);
void displayGrades(int g[][GRADES]);

int main(void)
{
    char ch ,str[80];
    for(;;)
    {
        do
        {
            printf("(E)nter grades\n");
            printf("(R)eport grades\n");
            printf("(Q)uit\n");
            gets(str);
            ch=toupper(*str);
        } while(ch!='E'&&ch!='R'&&ch!='Q');

        switch(ch)
        {
            case 'E':enterGrades();break;
            case 'R':displayGrades(grade);break;
            case 'Q':exit(0);
        }
        
    }
    return 0;
}
/*Function for entering grades*/
void enterGrades(void)
{
    int i,t;
    for(t=0;t<CLASSES;t++)
    {
        printf("Class # %d\n",t+1);
        for(i=0;i<GRADES;i++)
        {
            grade[t][i]=getGrades(i);
        }
    }
}

/*Reading a grade*/
int getGrades(int num)
{
    char s[80];
    printf("Enter the grade of student%d: \n",num+1);
    gets(s);
    return (atoi(s));//function to convert char value to int
}

/*Displaying grades*/
void displayGrades(int g[][GRADES])
{
    int t,i;
    for(t=0;t<CLASSES;t++)
    {
        printf("Class #%d\n",t+1);
        for(i=0;i<GRADES;i++)
        {   
            printf("Grade of student %d= %d\n",i+1,grade[t][i]);
        }
    }
}
