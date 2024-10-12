//Write a menu driven application which offers the user various operation to be performed. Then ask accept the user's choice , accept the required 
//input and do the selected operation. Repeat the process until user choose to quit. 

//Select an operation:
// 1.Factorial 2.Even-Odd 3.Sum of digit 4.Prime 5.Quit 

#include<stdio.h>

//Function for factorial
void fact(int n){
    int f =1;
    for(int i=n;i>0;i--){
        f = f*i ;
    }
    printf("Factorial is %d\n",f);
}

//Function for Even-Odd
void evenodd(int n){
    if(n%2==0)
      printf("\n%d is an Even no.\n",n);
    else 
      printf("\n%d is an odd no.\n",n);
}

//Function for sum of digits
void sumofdigit(int n){
    int sum=0;
    while(n>0){
        int x=n%10;
        sum = sum + x;
        n = n/10;
      }
    printf("Sum of digits is %d\n",sum);  
}

//function to check prime 
void prime(int n){
    for(int i=2;i<n;i++){
        if(n%i == 0){
          printf("It is not prime.\n");
          return;
        } 
    }
    printf("No is prime.\n");

}

int main(){
    int n,choice;
    printf("Enter an integer..");
    scanf("%d",&n);

    do{
    printf("Choose operation:\n1.Factorial\n2.Even-Odd\n3.Sum of digit\n4.Prime\n5.Quit\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
       fact(n);
       break;
    case 2:
       evenodd(n);
       break;
    case 3:
       sumofdigit(n);
       break;
    case 4:
       prime(n);
       break;
    case 5:
       printf("Thank you for using the app.Have a nice day!!");
       return 0;
    default :
       printf("!!Wrong choice_Try Again!!");   
}
}while (choice);

 return 0;
}