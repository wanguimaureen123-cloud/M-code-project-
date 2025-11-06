/* 
Name :Mwaniki Maureen Wangui 
Reg no :CT100/G/26135/25
Description:Create a file
*/


# include <stdio.h>

int main() {
    FILE *file;
    char title[200];

    // Open file in append mode 
    file = fopen("borrowed_books.txt", "a");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter the book title borrowed: ");
    fgets(title, sizeof(title), stdin);

    // Write title to file
    fputs(title, file);

    fclose(file);

    printf("Book title successfully recorded in borrowed_books.txt\n");

    return 0;
}
    