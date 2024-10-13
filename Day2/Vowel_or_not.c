//Wap to ask the user to input a character and find its vowel or not.

#include<stdio.h>
int main()
{
  char c;
  printf("Give a character: ");
  scanf("%c",&c);
  if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
    printf("its vowel");
  else
  printf("its not a vowel");
    return 0;
}