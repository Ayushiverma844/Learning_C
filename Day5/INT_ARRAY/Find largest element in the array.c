//Wap to create an array of 10 elements and accept input from the user, now find out the largest element of the array. make sure your code should not change the orignal order of elements in the array.

 #include<stdio.h>
 int main()
 {
     int i,max;
     int arr[10];
     for(i=0;i<10;i++)
       {
         printf("enter no.:");
         scanf("%d",&arr[i]);
       }
       max=arr[0];
     for(i=1;i<10;i++)
       {
         if(arr[i]>max)
           max=arr[i];
       }
    printf("Largest element is %d",max);
    return 0;
 }
 