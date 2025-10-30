/*
Name:Mwaniki Maureen Wangui
Reg no:CT100/G/26135/25
Description:1D Array Weekly Revenue Tracker
*/

// 1D Array

#include<stdio.h>

int main(){

int revenue[7] ={1, 2, 3, 4, 5, 6, 7};
//declare and initialize array
int total ;
float average;
// calculate total revenue 
for(int i=0;i<7;i++){
total+=revenue[i];
}
//calculate average 
average=total/7.0;
printf("%d\n",total);
printf("%d2.f\n", average);

return 0;
}