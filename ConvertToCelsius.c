/*
Name:Mwaniki Maureen Wangui
Reg no:CT100/G/26135/25
Unit:SPC 2101
Description:Convert Fahrenheit to Celsius 
*/

#include<stdio.h>

// Function to convert Fahrenheit to Celsius 
float convertToCelsius(float fahrenheit) {
    float celsius;
    celsius = (fahrenheit - 32) * 5.0 / 9.0;
    return celsius;
}

int main() {
    float f, c;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);

    c = convertToCelsius(f);
    printf("Temperature in Celsius: %.2f\n", c);

    return 0;
}  
