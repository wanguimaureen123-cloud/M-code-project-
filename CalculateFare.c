/*
Name:Mwaniki Maureen Wangui
Reg no:CT100/G/26135/25
unit:Spc2101
Description:Calculate Fare
*/

#include <stdio.h>

// Function to calculate fare
float calculate_fare(float distance) {
    float rate = 50.0; // fare rate per kilometer in Ksh
    float total_fare = distance * rate;
    return total_fare;
}

// Main function
int main() {
    float distance;
    printf("Enter distance traveled (in km): ");
    scanf("%f", &distance);

    float fare = calculate_fare(distance);
    printf("Total fare: Ksh. %.2f\n", fare);

    return 0;
}