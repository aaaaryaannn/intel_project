#include <stdio.h>
#include <math.h>

int main() {
    int choice, shape;
    float a, b, c, r, h;

    // Ask user for 2D or 3D shape
    printf("Enter 2 for 2D shape or 3 for 3D shape: ");
    scanf("%d", &choice);

    if (choice == 2) {
        // Ask user for type of 2D shape
        printf("Enter \n 1 for square \n 2 for circle \n 3 for rectangle \n 4 for triangle \n 5 for trapezium \n 6 for rhombus \n 7 for parallelogram: ");
        scanf("%d", &shape);

        // Calculate area and perimeter based on shape
        switch (shape) {
            case 1: // square
                printf("Enter the length of one side: ");
                scanf("%f", &a);
                printf("Area: %f\n", a * a);
                printf("Perimeter: %f\n", 4 * a);
                break;

            case 2: // circle
                printf("Enter the radius: ");
                scanf("%f", &r);
                printf("Area: %f\n", M_PI * r * r);
                printf("Perimeter: %f\n", 2 * M_PI * r);
                break;

            case 3: // rectangle
                printf("Enter the length and width: ");
                scanf("%f %f", &a, &b);
                printf("Area: %f\n", a * b);
                printf("Perimeter: %f\n", 2 * (a + b));
                break;

            case 4: // triangle
                printf("Enter the base and height: ");
                scanf("%f %f", &a, &b);
                printf("Area: %f\n", 0.5 * a * b);
                printf("Perimeter: %f\n", a + b + sqrt(a*a + b*b));
                break;

            case 5: // trapezium
                printf("Enter the length of parallel sides a and b, and the height h: ");
                scanf("%f %f %f", &a, &b, &h);
                printf("Area: %f\n", 0.5 * (a + b) * h);
                printf("Perimeter: %f\n", a + b + 2 * sqrt(h*h + pow((b-a)/2,2)));
                break;

            case 6: // rhombus
                printf("Enter the length of one diagonal and its perpendicular diagonal: ");
                scanf("%f %f", &a, &b);
                printf("Area: %f\n", 0.5 * a * b);
                printf("Perimeter: %f\n", 4 * sqrt(0.25*a*a + 0.25*b*b));
                break;

            case 7: // parallelogram
                printf("Enter the base and height: ");
                scanf("%f %f", &a, &h);
                printf("Area: %f\n", a * h);
                printf("Perimeter: %f\n", 2 * (a + sqrt(a*a + h*h)));
                break;

            default:
                printf("Invalid input.\n");
        }
    }
    else if (choice == 3) {
        // Ask user for type of 3D shape
        printf("Enter\n 1 for cube\n 2 for cylinder\n 3 for sphere\n 4 for hemisphere\n 5 for cone: ");
    scanf("%d", &shape);
        // Calculate volume, CSA, LSA, and TSA based on shape
    switch (shape) {
        case 1: // cube
            printf("Enter the length of one side: ");
            scanf("%f", &a);
            printf("Volume: %f\n", pow(a, 3));
            printf("Total Surface Area: %f\n", 6 * a * a);
            break;

        case 2: // cylinder
            printf("Enter the radius and height: ");
            scanf("%f %f", &r, &h);
            printf("Volume: %f\n", M_PI * r * r * h);
            printf("Curved Surface Area: %f\n", 2 * M_PI * r * h);
            printf("Total Surface Area: %f\n", 2 * M_PI * r * (h + r));
            break;

        case 3: // sphere
            printf("Enter the radius: ");
            scanf("%f", &r);
            printf("Volume: %f\n", 4 * M_PI * pow(r, 3) / 3);
            printf("Total Surface Area: %f\n", 4 * M_PI * r * r);
            break;

        case 4: // hemisphere
            printf("Enter the radius: ");
            scanf("%f", &r);
            printf("Volume: %f\n", 2 * M_PI * pow(r, 3) / 3);
            printf("Curved Surface Area: %f\n", 2 * M_PI * r * r);
            printf("Total Surface Area: %f\n", 3 * M_PI * r * r);
            break;

        case 5: // cone
            printf("Enter the radius and height: ");
            scanf("%f %f", &r, &h);
            printf("Volume: %f\n", M_PI * pow(r, 2) * h / 3);
            printf("Curved Surface Area: %f\n", M_PI * r * sqrt(r*r + h*h));
            printf("Total Surface Area: %f\n", M_PI * r * (r + sqrt(r*r + h*h)));
            break;

        default:
            printf("Invalid input.\n");
    }
}
else {
    printf("Invalid input.\n");
}

return 0;
}