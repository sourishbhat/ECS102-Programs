#include <stdio.h>
#include <string.h>

struct Date{
    int day;
    int month;
    int year;
}da;

struct Employee{
    int id;
    char name[50];
    struct Date dob;
}emp;

void main(){
    struct Employee e1;
    e1.id = 101;
    strcpy(e1.name, "Sourish");
    e1.dob.day = 23;
    e1.dob.month = 10;
    e1.dob.year = 2007;

    printf("Name: %s\n", e1.name);
    printf("ID: %d\n", e1.id);
    printf("DOB: %d/%d/%d\n", e1.dob.day, e1.dob.month, e1.dob.year);

    printf("Size of the Inner Structure: %u bytes\n", sizeof(da));
    printf("Size of the Outer Structure: %u bytes\n", sizeof(emp));
}
