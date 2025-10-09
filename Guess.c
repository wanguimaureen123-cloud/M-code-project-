/*
Name :Mwaniki Maureen Wangui 
Reg no :CT100/G/26135/25
Description Number guessing 
unit:Spc2101 programming 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

srand(time(NULL));

    int number =(rand() % 20 )+1;
    int guess=1;
    
    do
    {
    printf("Enter a guess:1-20");
    scanf("%d",&guess);
    
    if (guess ==number)
    printf("congratulations!\n");
    else if(guess>number)
    printf("Too high!\n");
    else 
    if (guess<number)
    printf("Too low!\n");
    }
    while (guess !=number);
    
    return 0;
    }
    
    
    
    