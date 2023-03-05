#include <stdio.h>

int main() {
    float expenses[31];
    float total_expenses = 0;
    int i, days;

    // Ask user for the number of days in the month
    printf("Enter the number of days you want to calculate the expense: ");
    scanf("%d", &days);

    // Loop through each day and ask user for expenses
    for (i = 0; i < days; i++) {
        printf("Enter expenses for day %d: ", i+1);
        scanf("%f", &expenses[i]);
        total_expenses += expenses[i];
    }

    // Display total expenses for the month
    printf("Total expenses for the month: %.2f", total_expenses);

    return 0;
}
