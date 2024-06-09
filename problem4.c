#include <stdio.h>

// Q. Write a program that takes a 5-digit integer as input (e.g., 12345) and outputs the number with its digits reversed (e.g., 54321). Do not use any loops.

int main() {
    int num = 12345;
    int a, b, c, d, e; 

    // Extract digits (no loop needed!)
    e = num % 10;           // 5
    num /= 10;              // 1234
    d = num % 10;           // 4
    num /= 10;              // 123
    c = num % 10;           // 3
    num /= 10;              // 12
    b = num % 10;           // 2
    num /= 10;              // 1
    a = num % 10;           // 1

    // Now construct the reversed number
    int reversed = e * 10000 + d * 1000 + c * 100 + b * 10 + a;

    printf("The reversed number is: %d\n", reversed);

    return 0;
}
