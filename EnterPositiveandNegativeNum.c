#include <stdio.h>

int main(){
	int neg, pos;
	
	do {
	printf("Please enter a positive and a negative number: ");
	scanf("%d %d", &pos, &neg);
	printf("You entered: %d %d\n", pos, neg);
	}
	
	while (!(pos >= 0 && neg <= 0));
	printf("Thank you! You have entered the required values.\n")
}