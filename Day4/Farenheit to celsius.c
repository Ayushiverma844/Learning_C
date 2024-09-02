// Wap to accept a temprature in farenheit from the user & calculate & print it in celsius, Assume farenheit to br int.

#include<stdio.h>
int main()
{
    int f;
    float c;
    printf("Enter temprature in farenhite: ");
    scanf("%d",&f);
    c=(f-32)*5/9;                 //[celsius=(f-32)*5/9]
    printf("Temprature in celcius is %f",c);
    return 0;
}