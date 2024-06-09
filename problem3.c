#include <stdio.h>

// Write a program that asks the user to enter a single character and then prints out both the character and its corresponding ASCII code.

int main() {
    char character;  // Use a descriptive variable name 
    int ascii_code; 

    printf("Enter any character: ");
    scanf(" %c", &character);  // Note the space before %c to consume potential newline

    printf("The entered character is: %c\n", character); 

    ascii_code = (int)character; // Type cast to get the ASCII value
    printf("Its ASCII code is: %d\n", ascii_code);

    return 0;
}
