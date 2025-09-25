/*
Name:MwMaureen Wangui 
Reg no:CT100/G/26135/25
SPC 2101
Description:Variables and Data types
*/
# include<stdio.h>
// main function


#define PI 3.14159
int main () {

    // Variables declaration and initialization 
    float radius, height;
    float volume, surfaceArea;
    
    // prompt the user to enter radius
    printf("Enter the radius of the cylinder:");
    // Read the user input for the radius
    scanf("%f",&radius);
    
    // prompt the user to enter height
    printf("Enter the height of the cylinder:");
    //Read the user input for the height
    scanf("%f",&height);
    
    // calculate the volume of the cylinder using the formula:V=πr^2h
    volume=PI*radius*radius*height;
    
    // calculate the surfaceArea of the cylinder using the formula:SA=2π^2+2πrh
    surfaceArea=(2*PI*radius*radius)+(2*PI*radius*height);
    
    // display the results with two decimal places 
    printf("\n volume of the cylinder:%.2f\n",volume);
    printf("\n surfaceArea of the cylinder:%.2f\n",surfaceArea);
    return 0;
    }
