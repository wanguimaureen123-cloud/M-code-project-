/*
Name:Mwaniki Maureen Wangui 
Reg no:CT100/G/26135/25
Date:18th oct 2025
Description:calculating the electric bill 
*/

#include<stdio.h>
// main function 

int main() {
int units;
float bill;
float total;

//prompt the user to enter the numbers of electric units consumed
printf("Enter the number of electric units consumed:");
scanf("%d",&units);

//calculate the bills using if-else if-else 
if(units<=100){
bill=units*10;
}
else if (units<=200){
bill=(100*10)+((units -100)*15);
}
else{
bill=(100*10)+(100*15)+((units-200)*20);
}

//display total bills
  printf("total water bill: %2f\n",bill);
  
    return 0;
}