/*Simple menu selection program through switch cases*/
#include <stdio.h>

void menu(void)
{
    char ch;
    printf("1.Check Spelling\n2.Correct Spelling Errors\n3.Display Spelling Errors\nStrike any other key to skip\n");
    printf("Enter your choice: ");
    ch=getchar();/*Read the selection from the keyboard.*/

    switch(ch)
    {
        case '1':printf("\t Checking the spelling...");/*check_spelling();*/break;
        case '2':printf("\t Correcting errors...");/*correct_errors();*/break;
        case '3':printf("\t Displaying the errors...");/*display_errors();*/break;
        default :printf("\t\"No option selected\"");
    }
}
int main(void)
{
    menu();
    return 0;
}
