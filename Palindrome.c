#include <stdio.h>
int main(){
	int num, temp, reverse = 0, remainder;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	temp = num;
	
	while (temp > 0){
		remainder = temp % 10;
		reverse = reverse * 10 + remainder;
		temp = temp/10;
	}
	
	if (num == reverse)
		printf("The number %d is a palindrome.", num);
	else
		printf("The number is not a palindrome.");
}
	