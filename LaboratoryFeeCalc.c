#include <stdio.h>
const int registerfee = 500;
#define cost 150

int main(){
    int rn;
    char name[40];
    int expt;
    int totalfee;

    printf("Enter the Roll Number: ");
    scanf("%d", &rn);

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter the number of experiments done: ");
    scanf("%d", &expt);

    printf("\n === Laboratory Fee Details === \n");
    printf("Roll Number: %d\n", rn);
    printf("Name: %s\n", name);
    printf("Number of Experiments Performed: %d\n", expt);
    printf("Registration Fee: %d\n", registerfee);
    printf("Cost per Experiment: %d\n", cost);
    printf("Total Laboratory Fee: %d\n", registerfee + expt * cost);

    printf("\n === Memory Usage === \n");
    printf("Size of Roll Number: %zu Bytes\n", sizeof(rn));
    printf("Size of Name: %zu Bytes\n", sizeof(name));
    printf("Size of Experiments Done: %zu Bytes\n", sizeof(expt));
    printf("Size of Registration Fees: %zu Bytes\n", sizeof(registerfee));
    printf("Size of Cost per Experiment: %zu Bytes\n", sizeof(cost));
}