//An insurance company provides insurance to its employees according to the following criteria:
      //1. If the employee is married.
      //2. If the employye is unmarried, male & above 35 years of age.
      //3. If the employye is unmarried, female & above 30 years of age.
//In all other cases insurance is not given. 
//Write a program to accept age,gender and marital status from the user and check whether he/she is eligible for insurance.



#include<stdio.h>
int age;
char gen,ms;

int main(){

//Accept age,gender and marital status from the user.
 printf("Enter your age: ");
 scanf("%d", &age);
 printf("Enter your gender (M/F): ");
 scanf(" %c", &gen); // Note the space before %c to handle any newline characters
 printf("Enter marital status (Y/N): ");
 scanf(" %c", &ms); // Same here

//Check Conditions....

//1. If Married..
if((ms=='y' || ms=='Y') && age>18)
   printf("Eligible for insurance...");

//2. If UNMarried..
else if(ms=='n' || ms=='N'){

    if((gen=='m' || ms=='M') && age>=35)
      printf("Eligible for insurance...");

    else if((gen=='f' || gen=='F') && age>=30)
      printf("Eligible for insurance...");
}

//3. If Conditions is not fulfil..
else
    printf("Not Eligible For Imsurance!!!!!");

 return 0;

}   

