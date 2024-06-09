#include <stdio.h>

// Q. write a program that takes user input scale up by 5 and print it

int main() {
  int number, scaled_number;

  // Prompt the user to enter a number
  printf("Enter a number: ");
  scanf("%d", &number);

  // Scale up the number by 5
  scaled_number = number * 5;

  // Print the scaled number
  printf("The number scaled up by 5 is: %d\n", scaled_number);

  return 0;
}
