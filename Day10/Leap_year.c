// Write a program to check if a given year is a leap year
// Example:
// Input: year = 2020
// Output: Leap Year
// Explanation: 2020 is divisible by 4 but not by 100, or it is divisible by 400, so it is a leap year.

#include<stdio.h>

int main(){
    int n;
    printf("Enter year: ");
    scanf("%d",&n);

    if(n%4==0 && n%100 !=0){
        printf("Its a Leap Year");
        return 0;
    }
    else if(n%400==0){
       printf("Its a Leap Year"); 
       return 0;
    }
    else{

        printf("Its Not a Leap Year");
    }
    return 0;

}