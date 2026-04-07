#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Inner{
    int StudentID;
    int age;
    char DiscountCode[20];
};

struct Outer{
    char name[50];
    int discountType;
    struct Inner discount;
};

void main(){

    struct Inner st;
    struct Outer ot;
    printf("Size of Inner: %lu bytes\n", sizeof(st));
    printf("Size of Outer: %lu bytes\n", sizeof(ot));
    

    struct Outer *user = (struct Outer*) malloc(sizeof(struct Outer));
    printf("Enter your name: ");
    scanf("%s", user->name);

    printf("Select your Discount Type: \n");
    printf("0 for Student; 1 for Senior Citizen; 2 for Promo Code.");
    scanf("%d", &user->discountType);

    switch (user->discountType){
        case 0:
        printf("Enter your Student ID: ");
        scanf("%d", &user->discount.StudentID);

        if (user->discount.StudentID >= 25000 || user->discount.StudentID <= 25500){
            printf("Student Discount is Applied.");
        } else {
            printf("Invalid Student ID. Discount NOT Applicable!");
        }
        break;

        case 1:
        printf("Enter your age: ");
        scanf("%d", &user->discount.age);
    
        if (user->discount.age >= 60){
            printf("Senior Citizen Discount is Applied.");
        } else {
            printf("Invalid Age. Discount NOT Applicable!");
        }
        break;

        case 2:
        printf("Enter the promo code: ");
        scanf("%s", user->discount.DiscountCode);
        if (strcmp(user->discount.DiscountCode, "DISCOUNT10") == 0 ){
            printf("Promo Code Discount Applied.");
        } else {
            printf("Invalid Promo Code. Discount NOT Applicable!");
        }
        break;
        default:
        printf("Invalid Discount Type!");
    }
    free(user);
}