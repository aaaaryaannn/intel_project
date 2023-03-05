#include <stdio.h>

int main() {
    int marks;
    printf("Enter the marks obtained by the student: ");
    scanf("%d", &marks);

    // Calculate the grade based on the marks
    char grade;
    if (marks >= 90) {
        grade = 'A';
    } else if (marks >= 80) {
        grade = 'B';
    } else if (marks >= 70) {
        grade = 'C';
    } else if (marks >= 60) {
        grade = 'D';
    } else if (marks >= 50) {
        grade = 'E';
    } else {
        grade = 'F';
    }

    // Display the grade to the user
    printf("The student's grade is: %c\n", grade);

    return 0;
}
