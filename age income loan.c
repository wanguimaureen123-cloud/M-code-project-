// simple c program 
/*
Name:MwaMaureen Wangui 
Reg no:CT100/G/26135/25
unit:SPC2101
Description:variable declaration and initialization 
*/

#include<stdio.h>
// main function 
   int main(){
   int age;
   float income;
   
   // prompt the user to enter age
   printf("Enter your age:");
   scanf("%d",&age);
   
   // prompt the user to enter income 
   printf("Enter your income:");
   scanf("%f",&income);
   
   // Check eligibility 
   if (age>=21&&income>=21000){
   printf("congratulations, you qualify for a loan.\n");
   }else {
   printf("unfortunately, we are unable to offer you a loan at this time.\n");
   }
   return 0;
   }