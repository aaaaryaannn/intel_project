#include <stdio.h>
int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    if(num < 0) {
        printf("Invalid input! Decimal number cannot be negative.\n");
    }
    else {
        int binary[100], i = 0, orig = num;
        while(num > 0) {
            binary[i] = num % 2;
            num /= 2;
            i++;
        }
        printf("Decimal to binary: ");
        for(int j = i - 1; j >= 0; j--) {
            printf("%d", binary[j]);
        }
        printf("\n");
        printf("Decimal to octal: %d in octal is %o\n", orig, orig);
        printf("Decimal to hexadecimal: %d in hexadecimal is %X\n", orig, orig);
    }
    return 0;
}