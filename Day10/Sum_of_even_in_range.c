// Write a program to find the sum of all even numbers within a given range.
// Example:
// Input: range = [1, 10]
// Output: 30
// Explanation: The sum of even numbers between 1 and 10 is 2 + 4 + 6 + 8 + 10 = 30.


#include<stdio.h>
#include<stdbool.h>

//function to check even no
bool even(int n){
    if(n%2==0){
        return true;
    }
    return false;
}

int main(){
    int n,m;
    int sum =0 ;
    printf("Give range[m,n]: "); //accept range from the user
    scanf("%d %d",&m,&n);


// sum of even no
    for(int i=m; i<=n ; i++){
        if(even(i)){
            sum = sum +i ;
        }
    }

    printf("Sum of even no between [%d,%d] = %d",m,n,sum);
    return 0;
}
