#include <stdio.h>

// Q. print your name 5 times in while loop

int main() {
    int count = 1;
    int num_times; 
    char name[100]; // Assuming name length won't exceed 100 characters

    printf("Enter your name: ");
    scanf("%s", name); // Read the name from the user

    while (count <= 5) {
        printf("%s\n", name); // Print the name 
        count++; 
    }

    return 0;
}
