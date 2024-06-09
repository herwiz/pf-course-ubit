#include <stdio.h>

// Q. Write a program that prompts the user to enter 50 numbers. The program should determine if each number is positive or negative and keep track of the count of each type. 
// At the end, the program should print the total number of positive and negative numbers entered.

int main() {
    int count = 1;
    int positive_count = 0;
    int negative_count = 0;
    int num;

    while (count <= 50) {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > 0) {
            positive_count++;
        } else if (num < 0) {
            negative_count++;
        }

        count++; 
    }

    printf("You entered %d positive numbers.\n", positive_count);
    printf("You entered %d negative numbers.\n", negative_count);

    return 0;
}
