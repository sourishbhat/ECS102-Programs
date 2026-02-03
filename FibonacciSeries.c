#include <stdio.h>

int main(){
	int i, j, n, k;
	printf("Enter a Number: ");
	scanf("%d", &n);
	i = 0;
	j = 1;
	printf("%d %d", i, j);
	k = i + j;
	while (k <= n){
		printf("%d\n", k);
		i = j;
		j = k;
		k = i + j;
	}
	printf("\n");
}