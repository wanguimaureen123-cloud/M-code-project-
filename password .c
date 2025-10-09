/*
Name:Mwaniki Maureen Wangui 
Reg no :CT100/G/26135/25
unit :Spc2101 programming 
Description:Input password
*/

#include<stdio.h>
#include<string.h>
int main(){
     char password [20];
    
    do{
    printf("Enter password");
    scanf("%s",&password);
    } while (strcmp(password,"1234")!=0);
    printf("Access Granted\n");
    
    return 0;
    }
    