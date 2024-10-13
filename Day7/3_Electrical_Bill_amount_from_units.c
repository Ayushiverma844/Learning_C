//Write a programe to accept no of electrical units consumed from the user abd find out the bill amount user has to pay according to thr table given below:

//   Units consumed                          Rate to be charged
//   0 to 200                                50 p per unit
//   201 to 400                              rs 100 + 65p per unit excess of 200
//   401 to 600                              rs 230 + 80p per unit excess of 400 
//   601 to above                            rs 390 + rs 1.00 per unit excess of 600


#include<stdio.h>
float unit;

int main(){

//Accept units from the user.
   printf("Enter electrical units: ");
   scanf("%f",&unit);

//Rate to be charged..
 //1. If consumed unit is between 0-200..

   if(unit>=0 && unit<=200)
       printf("You have to pay:%f",unit*0.50);
    
 //2. If consumed unit is between 201-400..
    
   else if(unit>=201 && unit<=400){
        unit = unit - 200;   //(cause charge rs 100 + 65p per unit will only apply on excess of 200)
        printf("You have to pay: %f",100+(unit*0.65));
    }

 //3. If consumed unit is between 401-600..
    
   else if(unit>=401 && unit<=600){
        unit = unit - 400;   //(cause charge rs 230 + 80p per unit will only apply on excess of 400)
        printf("You have to pay: %f",230+(unit*0.80));
    }

//4. If consumed unit is between 601-above..
    
   else if(unit>=601 ){
        unit = unit - 600;   //(cause charge rs 390 + rs 1.00 per unit will only apply on excess of 400)
        printf("You have to pay: %f",390+(unit*1.00));
    }

//5. If user gives negative no or anythig else..
    else
        printf("!!!False readinfg!!!!\n change or check your meter....");
    
return 0;

}





