/*
Name:Mwaniki Maureen Wangui
Reg no:CT100/G/26135/25
unit: Spc2101
Description:Calculate Electric bills
*/

#include<stdio.h>
// Function to calculate electric bill based on units consumed
float calculate_electric_bill(int units) {
    float bill = 0.0;

    if (units <= 100) {
        bill = units * 10;
    } 
    else if (units <= 200) {
        bill = (100 * 10) + ((units - 100) * 15);
    } 
    else {
        bill = (100 * 10) + (100 * 15) + ((units - 200) * 20);
    }

    return bill;
}

int main() {
    int units;
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    float total_bill = calculate_electric_bill(units);
    printf("Total bill amount: Ksh %.2f\n", total_bill);

    return 0;
}