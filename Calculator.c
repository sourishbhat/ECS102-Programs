#include <stdio.h>

int main(){

    char op;
    double num1, num2;

    printf("Enter (+, -, *, /): \n");
    scanf("%c",&op);

    printf("Enter the Numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch(op) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf", num1, num2, num1 + num2);
            break;
        
        case '-':
            printf("%.2lf - %.2lf = %.2lf", num1, num2, num1 - num2);
            break;
        
        case '*':
            printf("%.2lf * %.2lf = %.2lf", num1, num2, num1 * num2);
            break;
        
        case '/':
            printf("%.2lf / %.2lf = %.2lf", num1, num2, num1 / num2);
            break;

    }

}