#include <stdio.h>

// Write a program that takes two characters as input from the user and adds their corresponding ASCII values. Print the sum of the ASCII values.

int main() {
    char char1, char2;
    int sum;

    printf("Enter the first character: ");
    scanf(" %c", &char1);

    printf("Enter the second character: ");
    scanf(" %c", &char2);

    // Note: This adds the ASCII values, not the characters themselves
    sum = char1 + char2; 

    printf("The sum of the ASCII values is: %d\n", sum);

    return 0;
}
