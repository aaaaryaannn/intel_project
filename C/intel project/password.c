#include <stdio.h>
#include <string.h>

int main() {
    char password[20], input[20], data[100], pass[20];
    int attempt = 0;
    
    // Set the password
    printf("Create a Password: ");
    scanf("%s", pass);
    strcpy(password, pass);

    // Prompt the user for the password
    printf("Enter your password: ");
    scanf("%s", input);

    // Check if the password is correct
    while (strcmp(input, password) != 0 && attempt < 2) {
        attempt++;
        printf("Incorrect password. Please try again.\n");
        printf("Enter password: ");
        scanf("%s", input);
    }

    // If the password is correct, allow access to the data
    if (strcmp(input, password) == 0) {
        printf("Access granted.\n");
        printf("Enter data: ");
        scanf(" %s", data);
        printf("Data entered: %s\n", data);
    } else {
        printf("Access denied.\n");
    }

    return 0;
}
