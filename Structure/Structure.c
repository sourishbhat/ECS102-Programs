#include <stdio.h>

int main(){
    int n;
    struct abc {
        char name[30];
        int roll_no;
        int total_marks;
        char dob[20];
    };

    printf("Enter the number of Entries: \n");
    scanf("%d", &n);

    struct abc student[n];

    printf("Enter the Name, Roll Number, Marks, DOB: \n");
    for (int i = 0; i < n; i++){
        scanf("%s %d %d %s", student[i].name, &student[i].roll_no, &student[i].total_marks, student[i].dob);
    }

    printf("The Entered Data is: \n");
    for (int i = 0; i < n; i++){
        printf("%s %d %d %s\n", student[i].name, student[i].roll_no, student[i].total_marks, student[i].dob);
    }
}