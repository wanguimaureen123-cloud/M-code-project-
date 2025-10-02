/*
Name:Mwaniki Maureen Wangui
Reg no:CT100/G/26135/25
Description:Mobile data bundles
*/

#include<stdio.h>
// main function 
   int main () {
   int choice;
   // Display the menu
   printf("mobile data options:\n");
   printf("1.100 MB -50 KES\n");
   printf("2.500MB -200 KES\n");
   printf("3.1GB -350 KES\n");
   printf("4.2GB -600 KES\n");
   
   // Ask the user for their choice 
   printf("Enter your choice (1-4):");
   scanf("%d",&choice);
   
   // use switch to display selected bundle and cost 
   switch (choice) {
      case 1:
   printf("you selected:100MB-50KES\n");
      break;
      case 2:
   printf("you selected:500MB-200KES\n");
      break;
      case 3:
   printf("you selected:1GB-350KES\n");
      break;
      case 4:
   printf("you selected:2GB-600KES\n");
      break;
      default:
   printf("invalid choice.please select an option from 1 to 4.\n");
   }
   return 0;
   }