/*
Name:Mwaniki Maureen Wangui 
Reg no:CT100/26135/25
Unit:Spc2101 Programming 
Description :ATM Withdrawal Simulation 
*/

#include<stdio.h>
int main(){
   int balance;
   printf("Enter initial account balance");
   scanf("%d",&balance);
   
   while (balance >0){
   int amount;
   printf("Enter amount to withdraw:");
   scanf("%d",&amount);
   balance-=amount;
   
   if (balance>0)
   printf("Remaining balance:%d\n",balance);
   
   else 
   printf("insufficient fund.final balance:%d\n",balance);
   }
   return 0;
   }