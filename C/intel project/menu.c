#include <stdio.h>
#include <stdlib.h> // For the exit() function

int main() {
    int input, quantity;
    float total = 0, tax = 0;
    int s_charge = 50;

    // Display the restaurant menu
    printf("Welcome to the restaurant!\n");
    printf("Please select an item from the menu:\n");
    printf("1. Pasta - ₹180.00\n");
    printf("2. Pizza - ₹150.00\n");
    printf("3. Salad -  ₹120.00\n");
    printf("4. Burger -  ₹150.00\n");
    printf("5. Exit\n");
    printf("\n*Please note the total bill will be including service charges and taxes*\n");

    do {
        // Get the customer's choice
        printf("\nEnter your choice (1-5): ");
        scanf("%d", &input);

        // Process the customer's choice
        switch (input) {
            case 1:
                // Get the quantity and calculate the total cost for Pasta
                printf("Enter the quantity: ");
                scanf("%d", &quantity);
                tax = (quantity * 180 * 18)/100;
                total += (quantity * 180.00 + tax + s_charge);
                break;
            case 2:
                // Get the quantity and calculate the total cost for pizzas
                printf("Enter the quantity: ");
                scanf("%d", &quantity);
                tax = (quantity * 150 * 18)/100;
                total += (quantity * 150.00 + tax + s_charge);
                break;
            case 3:
                // Get the quantity and calculate the total cost for salads
                printf("Enter the quantity: ");
                scanf("%d", &quantity);
                tax = (quantity * 120 * 18)/100;
                total += (quantity * 120.00 + tax + s_charge);
                break;
            case 4:
                // Get the quantity and calculate the total cost for Burger
                printf("Enter the quantity: ");
                scanf("%d", &quantity);
                tax = (quantity * 150 * 18)/100;
                total +=(quantity * 150.00 + tax + s_charge);
                break;
            case 5:
                // Display the total bill and exit the program
                printf("Thank you for your order!\n");
                printf("Total bill (including GST): ₹%.2f\n", total);
                exit(0);
            default:
                // Display an error message for an invalid choice
                printf("Invalid choice. Please try again.\n");
        }
    } while (input != 5);

    return 0;
}
