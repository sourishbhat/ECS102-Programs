#include <stdio.h>
#include <string.h>

struct Student{
    char name[50];
    int age;
};


void printStudent(struct Student *studentPtr){
    printf("Name: %s\n", studentPtr -> name);
    printf("Age: %d\n", studentPtr -> age);
}

int main(){
    struct Student s1;
    strcpy(s1.name,"Aman");
    s1.age = 21;
    struct Student *ptr = &s1;

    printStudent(ptr);
    return 0;
}