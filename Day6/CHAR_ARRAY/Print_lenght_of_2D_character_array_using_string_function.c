//Wap to accept 5 strings from the user store them in  2D character array & print the lenght of each name using appropiriate string function.

#include<stdio.h>
#include<string.h>
int main()
{
  char str[5][10];
  int i,x;
  for(i=0;i<5;i++)
    {
     printf("Enter strings: ");
     gets(str[i]);
    }
  for(i=0;i<5;i++)
    {
        x=strlen(str[i]);
        printf("\nLenght of %s is %d",str[i],x);
        
    }
    return 0;
}