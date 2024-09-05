//Wap to accept 5 strings from the user store them in  2D character array & print the lenght of each name whitout using  string function.

#include<stdio.h>
int main()
{
  char str[5][10];
  int i,j;
  for(i=0;i<5;i++)
    {
     printf("Enter strings: ");
     gets(str[i]);
    }
  for(i=0;i<5;i++)
    {
        for(j=0;str[i][j]!='\0';j++);
        printf("\nLenght of %s is %d",str[i],j);
        
    }
    return 0;
}