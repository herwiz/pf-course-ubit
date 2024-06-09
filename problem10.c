#include <stdio.h>

// Write a program that takes a positive integer as input representing the number of rows and then prints a pyramid pattern of stars with the given number of rows.

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; ++i) {
        // Print spaces before stars
        for (int j = 1; j <= rows - i; ++j) {
            printf(" ");
        }
        // Print stars
        for (int k = 1; k <= 2 * i - 1; ++k) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
