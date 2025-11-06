/* 
Name:Mwaniki Maureen Wangui
Reg no.CT100/G/26135/25
Description:Book Title 
*/

#include <stdio.h>

int main() {
    FILE *file;
    char title[100];

    // Open the file in append mode 
    file = fopen("borrowed_books.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Get book title from librarian
    printf("Enter the book title: ");
    fgets(title, sizeof(title), stdin);

    // Write the title to the file
    fprintf(file, "%s", title);

    // Close the file
    fclose(file);

    // Display confirmation message
    printf("Book title successfully stored in borrowed_books.txt\n");

    return 0;
}