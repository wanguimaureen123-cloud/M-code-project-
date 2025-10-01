/*
Name:Mwaniki Maureen Wangui 
Reg no:CT100/G/26135/25
Date:29th Sept 2025
Description:calculating the water bill 
*/

#include<stdio.h>
// main function 

int main() {
int units;
float bill;
float total;

//prompt the user to enter the numbers of water units consumed
printf("Enter the number of water units consumed:");
scanf("%d",&units);

//calculate the bills using if-else if-else 
if(units<=30){
bill=units*20.0;
}
else if (units<=60){
bill=(30*20.0)+((units -30)*25.0);
}
else{
bill=(30*20.0)+(30*25.0)+((units-60)*30.0);
}

//display total bills
  printf("total water bill: %2f\n",bill);
  
    return 0;
}