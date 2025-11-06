/* 
Name: Mwaniki Maureen Wangui 
Reg no:CT100/G/26135/25
Description:Daily sales
*/

#include <stdio.h>

int main() {
    FILE *file;
    float amount, total = 0.0;

    // Open the file for reading
    file = fopen("sales.txt", "r");

    // Read each transaction amount from the file
    while ((file, "%f", &amount) == 1) {
        total += amount;
    }

    // Display the total sales
    printf("Total sales for the day: %.2f\n", total);

    // Close the file
    fclose(file);

    return 0;
}