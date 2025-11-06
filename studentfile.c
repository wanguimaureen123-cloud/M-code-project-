/*
Name:Mwaniki Maureen Wangui 
Reg no CT100/G/26135/25
Description:student information 
*/

#include <stdio.h>
#include <stdlib.h>

// Step 1: Define a structure to hold student information
struct Student {
    char name[50];
    char regNo[20];
    float totalMarks;
};

int main() {
    FILE *fp;
    struct Student s;

    // Step 2: Open the binary file for reading
    fp = fopen("results.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file! Make sure results.dat exists.\n");
        return 1;
    }

    printf("STUDENT RESULTS\n");
    printf("------------------------------\n");

    // Step 3: Read all records from the file and display them
    while (fread(&s, sizeof(struct Student), 1, fp) == 1) {
        printf("Name: %s\n", s.name);
        printf("Registration No: %s\n", s.regNo);
        printf("Total Marks: %.2f\n", s.totalMarks);
        printf("------------------------------\n");
    }

    fclose(fp);
    return 0;
}