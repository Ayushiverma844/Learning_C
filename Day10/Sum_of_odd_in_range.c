// Write a program to find the sum of all odd numbers within a given range.
// Example:
// Input: range = [1, 10]
// Output: 25
// Explanation: The sum of odd numbers between 1 and 10 is 1 + 3 + 5 + 7 + 9 = 25

#include<stdio.h>
#include<stdbool.h>

//function to check odd no
bool odd(int n){
    if(n%2==0){
        return false;    //(if divisible by 2 it means no is  even )
    }
    return true;
}

int main(){
    int n,m;
    int sum =0 ;
    printf("Give range[m,n]: "); //accept range from the user
    scanf("%d %d",&m,&n);


// sum of even no
    for(int i=m; i<=n ; i++){
        if(odd(i)){
            sum = sum +i ;
        }
    }

    printf("Sum of odd no between [%d,%d] = %d",m,n,sum);
    return 0;
}
