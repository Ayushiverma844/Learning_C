// Write a program to determine if a number is a perfect square.
// Example:
// Input: number = 16
// Output: True
// Explanation: 16 is a perfect square (4^2 = 16).

#include<stdio.h>
#include<math.h>

//Function to check square no
int square(int n){
    for(int i=2;i<=n;i++){
        int x = pow(i,2);
        if(x == n){
            return 1;
        }
    }
    return 0;
}


int main(){
    int num;

  //Accept number from the user
    printf("Enter num: ");
    scanf("%d",&num);


    if(square(num)){
        printf("Its a perfect square no.");
    }
    else{
        printf("Its not a perfect square no."); 
    }

    return 0;
}
