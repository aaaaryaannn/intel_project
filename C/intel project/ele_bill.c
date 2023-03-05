#include <stdio.h>

int main() {
    float units, bill_amount;
    printf("Enter units consumed: ");
    scanf("%f", &units);

    if (units <= 50) {
        bill_amount = units * 1;
    }
    else if (units <= 150) {
        bill_amount = units *3.6;
    }
    else if (units <= 250) {
        bill_amount = units * 5.4;
    }
    else {
        bill_amount =units * 7;
    }

    printf("Electricity bill: Rs. %.2f\n", bill_amount);

    return 0;
}



//For the first 50 units, the rate is Rs. 1 per unit
// For the next 100 units (i.e. from 51 to 150), the rate is Rs. 1.50 per unit
 //For the next 100 units (i.e. from 151 to 250), the rate is Rs. 2.00 per unit
 //For all units above 250, the rate is Rs. 2.50 per unit
 