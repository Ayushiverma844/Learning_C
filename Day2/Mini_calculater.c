//Wap to create  a mini calculater,the program should behave as follows:
  //first ask the user to input 2 integers then it should display 4 operation to the user: Add,Sub,Mult,Div.  Then it should wait for user's response. Based on the operation selected by the user, the program should perform the operation ans should display the result.  Make sure if selection is wrong then the code responds Wrong Choice.

  #include<stdio.h>
int main()
{
    int a,b;
    int choice;
    printf("Enter 2 integers");
    scanf("%d %d",&a,&b);
    printf("select an operation");
    printf("\n1. Addition\n2. subtraction\n3. multiplication\n4. division");
    printf("\nenter your choice");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
          printf("Addition is %d",a+b);
          break;
        case 2:
          printf("Subtraction is %d",a-b);
          break;
        case 3:
          printf("Multiplication is %d",a*b);
          break;
        case 4:
          printf("Division is %f",(float)a/b);
          break;
    default:
      printf("Wrong Choice");
    }
   return 0;
}