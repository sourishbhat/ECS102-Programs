#include <stdio.h>

int main(){
    int a, b, c, d, result, oddeven, divide;

    printf("Enter any 4 numbers: \n");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    result = a + b * c * d - a / d;
    printf("The result of the given set of numbers through the equation is: %d\n", result);

    divide = (result % 2 == 0);

    printf("%s\n", divide ? "The given result is even." : "The given result is odd.");
}