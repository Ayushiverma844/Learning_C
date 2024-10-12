//Ask the user to input an integer and print the sum of digit of that no. Now check wheather the sum is of more than 1 digit or not.
//If the sum is more than one digit then assume sum to be the no. and calculate the sum of its digits.
//Repeat the process until sum comes to be of 1 figit only.  


#include<stdio.h>

int main(){
int n,x;
int sum =0;

printf("Enter a no: ");
scanf("%d",&n);
while(n>0)
    {
        x=n%10;
        sum=sum+x;
        n=n/10;
    }
printf("Sum of digit is %d\n",sum);

while(sum > 9){
    n = sum;
    sum = 0;
    while(n > 0)
    {
        x=n%10;
        sum=sum+x;
        n=n/10;
    }
    printf("Sum of digit is %d\n",sum);

}


return 0;


}