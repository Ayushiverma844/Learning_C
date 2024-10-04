#include <stdio.h>

int main() {
int a,b,r,m;
printf("Enter 2 positive no ");
scanf("%d %d",&a,&b);
m = (a*b);
 if(a==0||b==0)
    printf("Error");
 while(a%b){
     r=a%b;
     a=b;
     b=r;
 }
 printf("HCF is=%d",b);
 printf("\nLCM is=%d",m/b); // hcf * lcm = a *b
 return 0;
}