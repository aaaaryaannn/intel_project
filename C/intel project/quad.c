#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, disc, root1, root2, real, imag;

    printf("Enter the coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    disc = b * b - 4 * a * c; //calculating the discriminant

    // Two real roots
    if (disc > 0){
        root1 = (-b + sqrt(disc)) / (2 * a);
        root2 = (-b - sqrt(disc)) / (2 * a);
        printf("The roots are real and distinct:\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    } 
    
    // Two equal roots
    else if (disc == 0) {
        root1 = -b / (2 * a);
        printf("The roots are real and equal:\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    } 
    
    // Two complex roots
    else {
        real = -b / (2 * a);
        imag = sqrt(-disc) / (2 * a);
        printf("The roots are complex and conjugate:\n");
        printf("Root 1 = %.2f + %.2fi\n", real, imag);
        printf("Root 2 = %.2f - %.2fi\n", real, imag);
    }
    return 0;
}
