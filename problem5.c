#include <stdio.h>

// Q. Write a program to calculate the factorial of a non-negative integer entered by the user.

int main() {
    int num, i;
    long long factorial = 1; // Use long long for larger factorials

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Handle cases where num is 0 or negative
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial for non-negative numbers
        for (i = 1; i <= num; ++i) {
            factorial *= i;
        }

        printf("Factorial of %d = %lld\n", num, factorial);
    }

    return 0;
}
