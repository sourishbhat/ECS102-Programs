#include <stdio.h>
#include <string.h>

struct Student{
    char name[50];
    int roll;
    float marks;
};

void Display(struct Student s){
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);
    strcpy(s.name, "Anil");
    s.roll = 200;
    s.marks = 54.73;

    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);
}

void main(){
    struct Student s1 = {"Aakash", 101, 89.5};
    Display(s1);
    printf("Name: %s\n", s1.name);
    printf("Roll Number: %d\n", s1.roll);
    printf("Marks: %.2f\n", s1.marks);
}