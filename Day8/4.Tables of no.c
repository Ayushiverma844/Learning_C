//WAP to accept an integer from the user and print the table of that no upto 10 terms.
//ex: enter no = 7
// 7*1=7  to 7*10 =70


#include<stdio.h>

int main(){
  
  int n;

//Accept an integer from the user.
printf("Enter a no: ");
scanf("%d",&n);

//Create Table..
for(int i=1;i<=10;i++){
  printf("%d*%d = %d\n",n,i,n*i);
}

return 0;

}