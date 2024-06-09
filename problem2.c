#include <stdio.h>

// Q. take any number input from user and find 05% of interest of it

int main() {
  float principal, interest;

  // Prompt the user to enter the principal amount
  printf("Enter the principal amount: ");
  scanf("%f", &principal);

  // Calculate the interest
  interest = principal * 0.05; // 5% is equivalent to 0.05

  // Print the interest amount
  printf("The interest at 5%% is: %.2f\n", interest); 

  return 0;
}
