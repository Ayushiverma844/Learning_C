//Wap to ask the user to input seconds and display it by converting into min & seconds. for example if the input is 100 then output should bhi 1 min 40 sec.

#include<stdio.h>
int main()
{
    int n;
    int minute,second;
    printf("Enter time in seconds: ");
    scanf("%d",&n);
    minute=n/60;
    second=n%60;
    printf("Time is %d min & %d sec",minute,second);
    return 0;
}