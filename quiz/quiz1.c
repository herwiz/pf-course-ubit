#include <stdio.h>

// Q. write a program that takes input 2d matrix then do sum and store in another 2d matrix

int main() {
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix1[rows][cols], matrix2[rows][cols];

    // Input for matrix1
    printf("Enter elements of matrix 1:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input for matrix2
    printf("Enter elements of matrix 2:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Sum of matrices
    int sum_matrix[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum_matrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Print the sum matrix
    printf("Sum Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", sum_matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}


// Input E.g

// Enter the number of rows: 2
// Enter the number of columns: 3
// Enter elements of matrix 1:
// 1 2 3
// 4 5 6 
// Enter elements of matrix 2:
// 7 8 9
// 10 11 12
