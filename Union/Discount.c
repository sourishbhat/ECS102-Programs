#include <stdio.h>
#include <string.h>

/* struct DiscountInfo{
    int StudentID;
    int age;
    char promoCode[30];
}; */

union DiscountInfo{
    int StudentID;
    int age;
    char promoCode[30];
};

struct Booking{
    char name[50];
    int DiscountType;
    union DiscountInfo discount;
};

int main(){
    struct Booking user;
    printf("Enter your Name: \n");
    scanf("%s", user.name);

    printf("Enter your Age: \n");
    scanf("%d", &user.discount.age);

    if (user.discount.age >= 60){
        printf("Senior Citizen Discount Applied.");
    }

    if (user.discount.age <= 59){
        printf("Enter the Discount Type: 0 = Student, 1 = Promo Code\n");
        scanf("%d", &user.DiscountType);

        switch (user.DiscountType){
            case 0: 
                printf("Enter the StudentID: ");
                scanf("%d", &user.discount.StudentID);
            
                printf("Student Discount Applied.");
                break;

            case 1:
                printf("Enter the Promo Code: ");
                scanf("%s", user.discount.promoCode);

                if (strcmp(user.discount.promoCode, "DISCOUNT10") == 0){
                    printf("Promo Code Discount Applied.");
                } else {
                    printf("Invalid Promo Code.");
                }
                break;
            default:
                printf("No Discount Applied.");

        }

    }
}