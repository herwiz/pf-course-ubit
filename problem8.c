#include <stdio.h>

// Q. Create a program that uses a do-while loop to print name "Mahwiz" multiple times. The program should prompt the user to enter 'y' to print again or 'n' to stop.

int main() {
    char choice;
    do {
        printf("Mahwiz\n"); 
        printf("Do you want to print again? (y/n): ");
        scanf(" %c", &choice); // Note the space before %c
    } while (choice == 'y'); // Continue loop if choice is 'y'

    return 0;
}
