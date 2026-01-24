#include <stdio.h>

int main(){
    int rn;
    char name[40];
    float cgpa;
    long long mobilenumber;

    printf("Enter your Roll Number: ");
    scanf("%d", &rn);

    printf("Enter your Name: ");
    scanf("%s", name);

    printf("Enter your CGPA: ");
    scanf("%f", &cgpa);

    printf("Enter your Phone Number: ");
    scanf("%ld", &mobilenumber);

    printf("\n === Details Entered ===\n");
    printf("Name: %s\n", name);
    printf("Roll Number: %d\n", rn);
    printf("CGPA: %.2f\n", cgpa);
    printf("Mobile Number: %lld\n", mobilenumber);
}