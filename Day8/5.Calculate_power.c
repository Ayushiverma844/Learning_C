//WAP to accept 2 integer from the user and assuming the first no to be base and the second no to be the power.
//Now calculate the result . 
//Make sure that if the power is 0 then result should be 1.


#include<stdio.h>
#include<math.h>

int main(){
  
  int b,p,x;

//Accept  integer from the user.
printf("Enter base and power no: ");
scanf("%d %d",&b,&p);

//Check whether base is 0 or not...
if(b ==0){
  printf("!!!Error!!!");
  return 0;
}

//Calculate answer.
x = pow(b,p);

printf("power %d of base %d = %d",p,b,x);

return 0;

}