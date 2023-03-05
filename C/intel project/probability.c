include <stdio.h>

int main() {
    float probability, sample_space, favorable_outcomes;

    printf("Enter the number of possible outcomes: ");
    scanf("%f", &sample_space);

    printf("Enter the number of favorable outcomes: ");
    scanf("%f", &favorable_outcomes);

    probability = favorable_outcomes /sample_space;

    printf("The probability of the event is: %.2f", probability); //We use the %.2f format specifier to round the result to two decimal places.


    return 0;
}
