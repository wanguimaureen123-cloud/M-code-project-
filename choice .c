/*
Name:MwaNiki Maureen wangui
Reg no:CT100/G/26135/25
Description 
*/

#include<stdio.h>
// main function 
   int main() {
   int choice;
   //Display the menu
   printf("select data bundle:\n");
   printf("1.100 MB @ 50 KES\n");
   printf("2.500 MB @ 200 KES\n");
   printf("3.1 GB @ 350 KES\n");
   printf("4.2 GB @ 600 KES\n");
   
   // Ask for user input
   printf("Enter your choice (1-4):");
   scanf("%d",&choice);
   
   //Evaluate the choice
   switch (choice) {
   case 1:
   printf("you selected 100 MB.cost=50 KES\n");
   break;
   case 2:
   printf("you selected 500MB.cost=200 KES\n");
   break;
   case 3:
   printf("you selected 1 GB.cost=350 KES\n");
   break;
   case 4:
   printf("you selected 2 GB.cost=600 KES\n");
   break;
   default:
   printf("invalid choice\n");
   break;
   }
   return 0;
   }