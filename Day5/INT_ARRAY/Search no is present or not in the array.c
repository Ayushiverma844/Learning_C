//Wap to accept 10 integers from the user and store them in an integer array, Now again ask the user to input no. & search whether this no. is present in array or no.
// if yes then print position otherwise print no. is not found.(Assume that array contain unique no only)

    #include<stdio.h>
 int main()
 {
     int i,n;
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
            printf("no is found at %d position",i+1);
            return 0;
           }
     }
         if(i==10)
            printf("no is not found");
     
 
     return 0;
 }
 
