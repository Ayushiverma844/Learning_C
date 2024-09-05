//Wap to ask the user to input password,the password will be of 4 character.On every keystroke a * should be displayed. If the password is correct code should display the msg password accepted otherwise it should display Invalid password.
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<string.h.
void main()
{
    char str[5];
    int i;
    clrscr();
    printf("Enter Password: ");
    for(i=0;i<5;i++)
    {
        str[i]=getch();
        printf("*");
    }
    str[i]='\0';
    printf("\nPassword verfication under process,Please wait....");
    delay(3000);
    if(strcmp(str,"abcd")==0)
    {
        textcolor(GREEN);
        cprintf("\r\nPassword Accepted.");
    }
    else
    {
        textcolor(RED)
        cprintf("\r\nInvaid Password!");
    }
    getch();
}