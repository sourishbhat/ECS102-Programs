#include <stdio.h>

int main() {
    int units;
    float bill;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 1.50;
    } 
    else if (units <= 200) {
        bill = (100 * 1.50) + (units - 100) * 2.50;
    } 
    else if (units <= 300) {
        bill = (100 * 1.50) + (100 * 2.50) + (units - 200) * 4.00;
    } 
    else {
        bill = (100 * 1.50) + (100 * 2.50) + (100 * 4.00) + (units - 300) * 5.00;
    }

    printf("Total electricity bill = Rs. %.2f\n", bill);

    return 0;
}
