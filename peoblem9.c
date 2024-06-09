#include <stdio.h>

// write program for table using for while loop

int main() {
    int table_num;

    printf("Enter a number to generate its multiplication table: ");
    scanf("%d", &table_num);

    // Using a 'for' loop
    printf("\nMultiplication table of %d using 'for' loop:\n", table_num);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", table_num, i, table_num * i);
    }

    // Using a 'while' loop
    printf("\nMultiplication table of %d using 'while' loop:\n", table_num);
    int j = 1;
    while (j <= 10) {
        printf("%d x %d = %d\n", table_num, j, table_num * j);
        j++;
    }

    return 0;
}
