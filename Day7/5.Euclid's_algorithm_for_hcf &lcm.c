#include <stdio.h>

int main() {
int a,b,r;
printf("Enter 2 positive no ");
scanf("%d %d",&a,&b);
 if(a==0||b==0)
    printf("Error");
 while(a%b){
     r=a%b;
     a=b;
     b=r;
 }
 printf("HCF is=%d",b);
 printf("\nLCM is=%d",(a*b)/b);
 return 0;
}