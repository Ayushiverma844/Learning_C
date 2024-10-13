//Wap to create an array of 10 elements and accept input from the user, now find out the largest and smallest element of the array.
// make sure your code should not change the orignal order of elements in the array.

 #include<stdio.h>
 int main()
 {
     int i,max,min;
     int x=0;

     int arr[10];
     
     for(i=0;i<10;i++)
       {
         printf("enter no.:");
         scanf("%d",&arr[i]);
       }
     
    max=arr[0];
  
     for(i=1;i<10;i++)
       {
         if(arr[i]>max){
           max=arr[i];
           x = i+1;
         }
       }
    printf("Largest element is %d at %d position\n",max,x);
     
     x = 0;
     min = arr[0];
  
     for(i=1;i<10;i++)
       {
         if(arr[i]<min){
           min = arr[i];
           x = i+1;
         }
       }
    printf("Smallest element is %d at %d position\n",min,x);

    return 0;
 }
 