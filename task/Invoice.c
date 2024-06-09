#include <stdio.h>
#include <string.h>
#include <time.h>

void displayMenu(char menu[][20], int price[], int n) {
    printf("Restaurant Menu:\n");
    for(int i = 0; i < n; i++) {
        printf("%d. %s - Rs. %d\n", i+1, menu[i], price[i]);
    }
}

void generateInvoice(char name[], char address[], char items[][20], int quantities[], int prices[], int itemCount) {
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    int totalCost = 0;

    printf("\n\nInvoice:\n");
    printf("Date: %d-%02d-%02d %02d:%02d:%02d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
    printf("Name: %s\n", name);
    printf("Address: %s\n", address);
    printf("Order Details:\n");
    for(int i = 0; i < itemCount; i++) {
        printf("Item: %s, Quantity: %d, Cost: Rs. %d\n", items[i], quantities[i], prices[i]);
        totalCost += prices[i];
    }
    printf("Total Cost: Rs. %d\n", totalCost);
    printf("Thank you for your order!\n");
}

int main() {
    char menu[][20] = {"Pizza", "Burger", "Sandwich", "Fries", "Coke"};
    int price[] = {200, 150, 100, 50, 30};
    int n = sizeof(menu) / sizeof(menu[0]);

    int option;
    printf("Welcome to the Restaurant!\n");
    printf("1. See the menu\n2. Order directly\n");
    printf("Enter your option: ");
    scanf("%d", &option);

    if(option == 1) {
        displayMenu(menu, price, n);
        printf("Enter 1 to order: ");
        int order;
        scanf("%d", &order);
        if(order != 1) {
            printf("Invalid option\n");
            return 1;
        }
    } else if(option != 2) {
        printf("Invalid option\n");
        return 1;
    }

    char items[10][20];
    int quantities[10], prices[10];
    int itemCount = 0;

    int moreItems = 1;
    while(moreItems == 1) {
        int choice, quantity;
        printf("Enter your choice (1-%d): ", n);
        scanf("%d", &choice);

        if(choice < 1 || choice > n) {
            printf("Invalid choice\n");
            continue;
        }

        printf("Enter quantity: ");
        scanf("%d", &quantity);

        strcpy(items[itemCount], menu[choice-1]);
        quantities[itemCount] = quantity;
        prices[itemCount] = price[choice-1] * quantity;
        itemCount++;

        printf("Do you want to add more items? (1 for Yes, 0 for No): ");
        scanf("%d", &moreItems);
    }

    char name[50], address[100];
    printf("Enter your name: ");
    scanf(" %[^\n]%*c", name);
    printf("Enter your address: ");
    scanf(" %[^\n]%*c", address);

    generateInvoice(name, address, items, quantities, prices, itemCount);

    return 0;
}


// Output 
// Welcome to the Restaurant!
// 1. See the menu
// 2. Order directly
// Enter your option: 1

// Restaurant Menu:
// 1. Pizza - Rs. 200
// 2. Burger - Rs. 150
// 3. Sandwich - Rs. 100
// 4. Fries - Rs. 50
// 5. Coke - Rs. 30
// Enter 1 to order: 1

// Enter your choice (1-5): 1
// Enter quantity: 2
// Do you want to add more items? (1 for Yes, 0 for No): 1

// Enter your choice (1-5): 3
// Enter quantity: 1
// Do you want to add more items? (1 for Yes, 0 for No): 0

// Enter your name: Mahwiz Khalil
// Enter your address: Block H North Nazimabad, Karachi

// Invoice:
// Date: 2024-06-09 12:34:56
// Name: Mahwiz Khalil
// Address: Block H North Nazimabad, Karachi
// Order Details:
// Item: Pizza, Quantity: 2, Cost: Rs. 400
// Item: Sandwich, Quantity: 1, Cost: Rs. 100
// Total Cost: Rs. 500
// Thank you for your order!
