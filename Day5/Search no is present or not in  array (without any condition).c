//Wap to accept 10 integers from the user and store them in an integer array, Now again ask the user to input no. & search whether this no. is present in array or no. if yes then print position otherwise print no. is not found.
  //(without any condition means it may contain repeated no also)

 #include<stdio.h>
 int main()
 {
     int i,n,count=0;
     int arr[10];
     for(i=0;i<10;i++)
      {
         printf("enter no.:");
         scanf("%d",&arr[i]);
      }
     printf("enter no to search ");
     scanf("%d",&n);
     for(i=0;i<10;i++)
     {
         if(n==arr[i])
           {
            printf("\nno is found at %d position",i+1);
            count++;
           }
     }
         if(count==0)   //(when will be if true then count will be increase but if is false then count would be 0, thats why be considering here count=0 it means if is false thats why number is not found. )
            printf("no is not found");
     return 0;
 }
 