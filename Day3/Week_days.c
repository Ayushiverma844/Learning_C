// Imagine we have to accept an integer between 1to7 & display the name of the weekday corresponding to that int.

#include<stdio.h>
int main()
{
    int n;
    printf("enter a no between 1-7: ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
          printf("Its Monday");
          break;
        case 2:
          printf("Its Tuesday");
          break;
        case 3:
          printf("Its Wednesday");
          break;
        case 4:
          printf("Its Thursday");
          break;
        case 5:
          printf("Its Friday");
          break;
        case 6:
          printf("Its Saturday");
          break;
        case 7:
          printf("Its Sunday");
          break;
        default:
          printf("Wrong choice");
    }
return 0;    
}