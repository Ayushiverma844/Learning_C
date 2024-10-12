//Create an array of n integers, accept values from the user in it and display sum of even and odd no separately, 
//along with sum calculate average also.


#include<stdio.h>

int main(){
int n,i;
int sum=0;
int count=0;

printf("Enter size of array: ");
scanf("%d",&n);

int arr[n];

for(i=0;i<n;i++){
    printf("Enter no: ");
    scanf("%d",&arr[i]);
}

for(i=0;i<n;i++){
   if(arr[i] % 2 ==0){
    sum = sum + arr[i];
    count++;
   }
}
printf("Sum of Even no is %d\n",sum);
printf("Average of Even no is %f\n",(float)sum/count);

sum = 0;
count = 0;
for(i=0;i<n;i++){
   if(arr[i] % 2 !=0){
    sum = sum + arr[i];
    count++;
   }
}
printf("Sum of Odd no is %d\n",sum);
printf("Average of Odd no is %f\n",(float)sum/count);

return 0;


}